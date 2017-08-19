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
    
    ofPolyline letterA = ABZ.getCharacterLargestLine('a', screen);
    
    letterA.draw();

    float pct = ofMap( sin(ofGetElapsedTimef()), -1, 1, 0, 1);
    ofPoint pt = letterA.getPointAtPercent(pct);
    ofCircle(pt, 10);
    
    
//    float pct = fmod(ofGetElapsedTimef(), 1.0);
//    ofPoint pt = letterA.getPointAtPercent(pct);
//    ofCircle(pt, 10);
    
//    float startPt = fmod(ofGetElapsedTimef()*0.4, 1.0);
//    float range = 0.2;
//    ofPolyline temp;
//    for (int i = 0; i< 100; i++){
//        float pct = ofMap(i, 0, 100,startPt, startPt + range);
//        pct = fmod(pct, 1.0);
//        temp.addVertex( letterA.getPointAtPercent(pct));
//    }
//    temp.draw();
    
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
