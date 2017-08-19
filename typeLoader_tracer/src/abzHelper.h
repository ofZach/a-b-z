#pragma once

#include "ofMain.h"

class abzHelper {
    
public:
    
    
    ofTrueTypeFont font;
    
    void loadFont(string name);
    
    vector < ofPolyline > getCharacterLines( char c, ofRectangle fitInside );
    void drawCharacterIntoImage( ofImage & img, char c);
    
    
    ofPolyline getCharacterLargestLine( char c, ofRectangle fitInside );
    
};