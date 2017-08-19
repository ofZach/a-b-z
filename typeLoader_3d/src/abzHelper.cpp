

#include "abzHelper.h"

//---------------------------------------------------------------
void abzHelper::loadFont(string name){
    font.load(name, 200, true, true, true);
}





vector < ofPolyline > abzHelper::getCharacterLines( char c, ofRectangle fitInside){
    
    
    ofPath p = font.getCharacterAsPoints(c);
    vector < ofPolyline > lines = p.getOutline();
    
    ofRectangle temp;
    bool bSetYet = false;
    for (auto line : lines){
        for (auto pt : line){
            
            if (bSetYet == false){
                temp.setPosition(pt.x, pt.y);
            } else {
                temp.growToInclude(pt.x, pt.y);
            }
            bSetYet = true;
        }
    }
    
    ofRectangle target = temp;
    
    target.scaleTo(fitInside);
    
    for (auto & line : lines){
        for (auto & pt : line){
            
            float pctx = ofMap(pt.x, temp.x, temp.x + temp.width, 0, 1);
            float pcty = ofMap(pt.y, temp.y, temp.y + temp.height, 0, 1);
            pt.x = ofMap(pctx, 0, 1, target.x, target.x + target.width);
            pt.y = ofMap(pcty, 0, 1, target.y, target.y + target.height);
            
        }
    }

    
    return lines;
}



ofPolyline abzHelper::getCharacterLargestLine( char c, ofRectangle fitInside){
    
    
    ofPath p = font.getCharacterAsPoints(c);
    vector < ofPolyline > lines = p.getOutline();
    
    int largest = -1;
    float maxLength = 0;
    
    for (int i = 0; i < lines.size(); i++){
        float length = lines[i].getPerimeter();
        if (length > maxLength){
            maxLength = length;
            largest = i;
        }
    }
    
    
    ofPolyline lineWeWant = lines[largest];
    
    ofRectangle temp;
    temp = lineWeWant.getBoundingBox();
//    bool bSetYet = false;
//    for (auto line : lines){
//        for (auto pt : line){
//            
//            if (bSetYet == false){
//                temp.setPosition(pt.x, pt.y);
//            } else {
//                temp.growToInclude(pt.x, pt.y);
//            }
//            bSetYet = true;
//        }
//    }
    
    ofRectangle target = temp;
    
    target.scaleTo(fitInside);
    
    //for (auto & line : lines){
        for (auto & pt : lineWeWant){
            
            float pctx = ofMap(pt.x, temp.x, temp.x + temp.width, 0, 1);
            float pcty = ofMap(pt.y, temp.y, temp.y + temp.height, 0, 1);
            pt.x = ofMap(pctx, 0, 1, target.x, target.x + target.width);
            pt.y = ofMap(pcty, 0, 1, target.y, target.y + target.height);
            
        }
    //}
    
    
    return lineWeWant;
}

void abzHelper::drawCharacterIntoImage(ofImage & img, char c){
    
    
    ofRectangle bounds = ofRectangle(0,0, img.getWidth(), img.getHeight());

    ofPath p = font.getCharacterAsPoints(c);
    vector < ofPolyline > lines = p.getOutline();
    
    ofRectangle temp;
    bool bSetYet = false;
    for (auto line : lines){
        if (!bSetYet){
            temp = line.getBoundingBox();
            bSetYet = true;
        } else {
            temp.growToInclude(line.getBoundingBox());
            
        }
//        for (auto pt : line){
//            
//            if (bSetYet == false){
//                temp.setPosition(pt.x, pt.y);
//            } else {
//                temp.growToInclude(pt.x, pt.y);
//            }
//            bSetYet = true;
//        }
    }
    
    ofRectangle target = temp;
    target.scaleTo(bounds);
    target.scaleFromCenter(0.9);
    ofPoint offset = target.getPosition() - temp.getPosition();
    float scalef = target.height / temp.height;
    ofFbo fbo;
    fbo.allocate(bounds.width, bounds.height, GL_RGB);
    
    
    fbo.begin();
    ofClear(0,0,0);
    ofPushMatrix();
    ofTranslate(offset.x, img.getHeight()*0.5 + target.getHeight()*0.5);
    ofScale( scalef, scalef);
    ofSetColor(255,255,255);
    p.setFillColor(ofColor::white);
    p.setFilled(true);
    p.draw();
    p.getOutline()[0].draw();
    ofPopMatrix();
    fbo.end();
    
    fbo.readToPixels(img.getPixels());
    img.update();

}




