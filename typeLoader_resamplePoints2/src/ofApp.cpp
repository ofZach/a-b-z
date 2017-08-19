#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){

    
    ABZ.loadFont("HelveticaNeueMed.ttf");
    
}

//--------------------------------------------------------------
void ofApp::update(){

}

//--------------------------------------------------------------
void ofApp::draw(){
    
    ofBackground(0);
    
    ofRectangle screen = ofRectangle(0,0,ofGetWidth(), ofGetHeight());
    screen.scaleFromCenter(0.8);
    vector < ofPolyline > lines = ABZ.getCharacterLines('R', screen);
    
    ofSeedRandom(mouseX);
    
    for (int i = 0; i < lines.size(); i++){
        
        ofPolyline line = lines[i].getResampledBySpacing(20);
        
        // connect every point to the mouse: 
        for (int j = 0; j < line.size(); j++){
            ofPoint pt = line[j];
            ofPoint mouse(mouseX, mouseY);
            ofDrawLine(pt, mouse);
        }
        
        
        // shoot lines off away from the mouse with constant length
//        for (int j = 0; j < line.size(); j++){
//            ofPoint pt = line[j];
//            ofPoint mouse(mouseX, mouseY);
//            ofPoint diff = pt - mouse;
//            diff.normalize();
//            ofLine(pt, pt + diff * 100);
//        }
   
        // using random:
//        for (int j = 0; j < line.size(); j++){
//            
//            if (ofRandom(0,1) > 0.5){
//                int j_p_1 = (j + (int)ofRandom(10, 40)) % line.size();
//                ofDrawLine( line[j] , line[j_p_1]);
//            }
//            
//        }
        
        

    }

   
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
