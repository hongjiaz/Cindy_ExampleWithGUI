//created by Hongjia Zhang

#pragma once

#include "ofMain.h"
#include "ofxGui.h"
class ofApp : public ofBaseApp{
    
public:
    
    void setup();
    void update();
    void draw();
    
    void keyPressed(int key);
    void keyReleased(int key);
    void mouseMoved(int x, int y );
    void mouseDragged(int x, int y, int button);
    void mousePressed(int x, int y, int button);
    void mouseReleased(int x, int y, int button);
    void windowResized(int w, int h);
    void dragEvent(ofDragInfo dragInfo);
    void gotMessage(ofMessage msg);
    
    ofxFloatSlider rectWidth;
    //set the rect's width
    ofxFloatSlider rectHeight;
    //set the rect's height
    float 	counter;
    //set the counter
    bool	bSmooth;
    //set the smooth
    ofxPanel gui;
    //set the gui
    ofxToggle filled;
    //set the filled
};

