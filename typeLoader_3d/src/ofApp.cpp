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
    screen.scaleFromCenter(0.5);
    ofPolyline linesPreSample = ABZ.getCharacterLargestLine('a' + mouseX % 26, screen);
    
    linesPreSample = linesPreSample.getResampledByCount(300);
    
    vector < ofPolyline > rotatedPaths;
    
    
    ofRectangle bounds = linesPreSample.getBoundingBox();
    
    
    for (int i = 0; i < linesPreSample.size(); i++){
        
        ofPolyline temp;
        for (int j = 0; j < 360; j++){
            ofPoint pt = linesPreSample[i];
            pt -= ofPoint(bounds.x, ofGetHeight()/2);
            //pt.x += j;
            pt.rotate(j, ofPoint(0,1,0));
            
            // since we are using a camera,
            // we don't translate back to
            // mid point
            //pt += ofPoint(ofGetWidth()/2, ofGetHeight()/2);

            temp.addVertex(pt);
        }
        rotatedPaths.push_back(temp);
    }
    
    cam.enableOrtho();
    cam.begin();
    ofRotateX(180);
    for (int i = 0; i < rotatedPaths.size(); i++){
        rotatedPaths[i].draw();
    }
    cam.end();
    
   
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
