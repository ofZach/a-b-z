#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){

    
    ABZ.loadFont("HelveticaNeueMed.ttf");
    
    img.allocate(200, 200, OF_IMAGE_COLOR);
    ABZ.drawCharacterIntoImage(img, 'Z');
    
    grabber.setup(640, 480);
    
}

//--------------------------------------------------------------
void ofApp::update(){

    grabber.update();
}

//--------------------------------------------------------------
void ofApp::draw(){
    
    ofBackground(0);
    
    //grabber.draw(0,0);
    
    
//    for (int i = 0; i < grabber.getWidth(); i+=10){
//        for (int j = 0; j < grabber.getHeight(); j+=10){
//            ofColor pixel = grabber.getPixels().getColor(i, j);
//            float brightness = pixel.getBrightness();
//            ofCircle( i, j, ofMap(brightness, 0, 255, 1,5));
//        }
//    }
    
    ofSetLineWidth(5);
    
    for (int i = 0; i < grabber.getWidth(); i+=10){
        for (int j = 0; j < grabber.getHeight(); j+=10){
            ofColor pixel = grabber.getPixels().getColor(i, j);
            float brightness = pixel.getBrightness();
            
            ofPushMatrix();
            ofTranslate(i, j);
            ofRotateZ(ofMap(brightness, 0, 255, 0, 90));
            ofLine(0,0,10,0);
            ofPopMatrix();
            //ofCircle( i, j, ofMap(brightness, 0, 255, 1,5));
        }
    }
    
    
    
    //img.draw(0,0);
    
    // draw as grid
//    for (int i = 0; i < img.getWidth(); i+=5){
//        for (int j = 0; j< img.getHeight(); j+=5){
//            ofColor pixel = img.getColor(i, j);
//            float brightness = pixel.getBrightness();
//            
//            ofCircle( i * 4, j * 4, ofMap(brightness, 0, 255, 1,2));
//            //cout << brightness << endl;
//        }
//    }
    
    
}

//--------------------------------------------------------------
void ofApp::keyPressed(int key){

}

//--------------------------------------------------------------
void ofApp::keyReleased(int key){

}

//--------------------------------------------------------------
void ofApp::mouseMoved(int x, int y ){

}

//--------------------------------------------------------------
void ofApp::mouseDragged(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::mousePressed(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::mouseReleased(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::mouseEntered(int x, int y){

}

//--------------------------------------------------------------
void ofApp::mouseExited(int x, int y){

}

//--------------------------------------------------------------
void ofApp::windowResized(int w, int h){

}

//--------------------------------------------------------------
void ofApp::gotMessage(ofMessage msg){

}

//--------------------------------------------------------------
void ofApp::dragEvent(ofDragInfo dragInfo){ 

}
