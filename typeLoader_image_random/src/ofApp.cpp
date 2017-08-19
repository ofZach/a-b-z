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
    
    ofBackground(0);
    
    //img.draw(0,0);
   
    ofSeedRandom(mouseX);
    for (int i = 0; i < 1000; i++){
        ofPoint pt( ofRandom(0,200), ofRandom(0,200));
        ofColor pixel = img.getColor(pt.x, pt.y);
        float brightness = pixel.getBrightness();
        float radius = ofRandom(3, 35);
        if (brightness > 0){
            ofFill();
            ofSetColor(0);
            ofCircle(pt.x * 3, pt.y * 3, radius);
            ofNoFill();
            ofSetColor(255);
            ofCircle(pt.x * 3, pt.y * 3, radius);
            
        }
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
