#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){

    
    ABZ.loadFont("HelveticaNeueMed.ttf");
    
    img.allocate(200, 200, OF_IMAGE_COLOR);
    ABZ.drawCharacterIntoImage(img, 'Z');
}

//--------------------------------------------------------------
void ofApp::update(){

}

//--------------------------------------------------------------
void ofApp::draw(){
    
    
    ofRectangle screen = ofRectangle(0,0,ofGetWidth(), ofGetHeight());
    screen.scaleFromCenter(0.8);
    vector < ofPolyline > lines = ABZ.getCharacterLines('z', screen);
    
    for (int i = 0; i < lines.size(); i++){
        
        lines[i].draw();
        
        for (int j = 0; j < lines[i].size(); j++){
            ofCircle(lines[i][j], 10);
        }
    
    }

    img.draw(0,0);
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
