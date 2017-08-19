#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){

    
    ABZ.loadFont("HelveticaNeueMed.ttf");
    
    ofRectangle screen = ofRectangle(0,0,ofGetWidth(), ofGetHeight());
    screen.scaleFromCenter(0.8);
    vector < ofPolyline > linesPreSample = ABZ.getCharacterLines('R', screen);
    
    for (int i = 0; i < linesPreSample.size(); i++){
        ofPolyline line = linesPreSample[i];
        line = line.getResampledBySpacing(10);
        lines.push_back(line);
        
    }
}

//--------------------------------------------------------------
void ofApp::update(){

}

//--------------------------------------------------------------
void ofApp::draw(){
    
    ofBackground(0);
    
    for (int i = 0; i < lines.size(); i++){
        
        // impressionistic style
//        for (int j = 0; j < lines[i].size(); j++){
//            lines[i][j].x += ofRandom(-1,1);
//            lines[i][j].y += ofRandom(-1,1);
//            
//        }
//        
//        ofPolyline lineSmoothed = lines[i];
//        lineSmoothed = lineSmoothed.getResampledBySpacing(3);
//        lineSmoothed = lineSmoothed.getSmoothed(11);
//        lineSmoothed.draw();
        
        
        // that time you were on mushrooms look at type
//        for (int j = 0; j < lines[i].size(); j++){
//            lines[i][j].x += sin(ofGetElapsedTimef() + j*0.1);
//            lines[i][j].y += sin(ofGetElapsedTimef() + j*0.2);
//        }
//        
//        lines[i].draw();
        
        // simple random:
        for (int j = 0; j < lines[i].size(); j++){
            lines[i][j].x += ofRandom(-1,1);
            lines[i][j].y += ofRandom(-1,1);
        }
        lines[i].draw();
        
        
    }
    
    
    //ofSeedRandom(mouseX);
    
//    for (int i = 0; i < lines.size(); i++){
//        
//        
//        for (int j = 0; j < line.size(); j++){
//            line[j].x += ofRandom(-100,100);
//            line[j].y += ofRandom(-100,100);
//            
//        }
//        
//        line.draw();
//  
//        
//        
//
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
