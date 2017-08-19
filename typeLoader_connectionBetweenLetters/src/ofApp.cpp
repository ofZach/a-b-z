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
    
 
    ofRectangle screenA = ofRectangle(0,0,ofGetWidth()/2, ofGetHeight());
    
    ofRectangle screenB = ofRectangle(ofGetWidth()/2,0,ofGetWidth()/2, ofGetHeight());
    
    screenA.scaleFromCenter(0.8);
    screenB.scaleFromCenter(0.8);
    
    ofPolyline letterA = ABZ.getCharacterLargestLine('a', screenA);

    ofPolyline letterB = ABZ.getCharacterLargestLine('z', screenB);
    
    letterA = letterA.getResampledByCount(100);
    letterB = letterB.getResampledByCount(100);
    
    int count = MIN(letterA.size(), letterB.size());
    
    for (int i = 0; i < count; i++){
        ofLine(letterA[(i + mouseX) % letterA.size() ], letterB[i]);
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
