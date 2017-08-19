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
    
    for (int i = 0; i < lines.size(); i++){
        
        ofPolyline line = lines[i].getResampledBySpacing(10);
        
        line = line.getSmoothed(MAX(mouseX, 1));
        
        line.draw();
        for (int j = 0; j < line.size(); j++){
            ofCircle(line[j].x, line[j].y, 3);
        }
//        lines[i].draw();
//        
//        for (int j = 0; j < lines[i].size(); j++){
//            ofCircle(lines[i][j], 10);
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
