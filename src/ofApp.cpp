#include "ofApp.h"


//--------------------------------------------------------------
void ofApp::setup(){
//At the begining of the program, to define the basic code condition.
    gui.setup();
    //set the gui
    gui.add(filled.setup("fill",true));
    //make the fill work
    gui.add(rectWidth.setup( "Width", 100, 10, 300 ));
    //set the period of change
    gui.add(rectHeight.setup( "Height", 100, 10, 300 ));
    //set the period of change
    
    counter = 0;
    //counter is 0
    ofSetCircleResolution(50);
    //resolution equal to 50
    ofBackground(255,255,255);
    //set the background color
    bSmooth = false;
    //close the smooth
    ofSetWindowTitle("graphics example");
    //set the title
    
    ofSetFrameRate(60);
    // if vertical sync is off, we can go a bit fast... this caps the framerate at 60fps.
}

//--------------------------------------------------------------
void ofApp::update(){
//set the update code
    counter = counter + 0.033f;
    //add sth to counter
}

//--------------------------------------------------------------
void ofApp::draw(){
//To work on the code.
    
    gui.draw();
    //draw the gui
    if( filled ){
    //if ... else
        ofFill();
        //fill into
    }else{
    //if ... else
        ofNoFill();
        //no fill into
    }
    //--------------------------- circles
    //let's draw a circle:
    ofSetColor(255,130,0);
    //set the color
    float radius = 50 + 10 * sin(counter);
    //set the radius
    //ofFill();		// draw "filled shapes"
    ofCircle(100,400,radius);
    //set the position
    
    // now just an outline
    ofNoFill();
    //no color
    ofSetHexColor(0xCCCCCC);
    ofCircle(100,400,80);
    
    // use the bitMap type
    // note, this can be slow on some graphics cards
    // because it is using glDrawPixels which varies in
    // speed from system to system.  try using ofTrueTypeFont
    // if this bitMap type slows you down.
    ofSetHexColor(0x000000);
    ofDrawBitmapString("circle", 75,500);
    //draw the string of circle
    
    
    //--------------------------- rectangles
    ofFill();
    //fill the color
    for (int i = 0; i < 200; i++){
    //the numbers
        ofSetColor((int)ofRandom(0,255),(int)ofRandom(0,255),(int)ofRandom(0,255));
        //set the color
        ofRect(ofRandom(250,350),ofRandom(350,450),ofRandom(10,20),ofRandom(10,20));
        //set the rect's size
    }
    ofSetHexColor(0x000000);
    //set the color
    ofDrawBitmapString("rectangles", 275,500);
    //draw the string
    
    //---------------------------  transparency
    ofSetHexColor(0x00FF33);
    //set the color
    ofRect(400,350,100,100);
    // alpha is usually turned off - for speed puposes.  let's turn it on!
    ofEnableAlphaBlending();
    ofSetColor(255,0,0,127);
    // red, 50% transparent
    ofRect(450,430,rectWidth,rectHeight);
    //rect's position
    
    ofSetColor(255,0,0,(int)(counter * 10.0f) % 255);   // red, variable transparent
    //set the color
    ofRect(450,370,100,33);
    //set the rect
    ofDisableAlphaBlending();
    
    ofSetHexColor(0x000000);
    //set the color
    ofDrawBitmapString("transparency", 410,500);
    //draw the string
    
    //---------------------------  lines
    // a bunch of red lines, make them smooth if the flag is set
    
    ofSetHexColor(0xFF0000);
    //set the color
    for (int i = 0; i < 20; i++){
    //the numbers
        ofLine(600,300 + (i*5),800, 250 + (i*10));
        //set the lines
    }
    
    ofSetHexColor(0x000000);
    //set the color
    ofDrawBitmapString("lines\npress 's' to toggle smoothness", 600,500);
    //draw the string
    
}


//--------------------------------------------------------------
void ofApp::keyPressed  (int key){
//keyboard in
    if (key == 's'){
    //set keyboard "s"
        bSmooth = !bSmooth;
        if (bSmooth){
        //if ... else
            ofEnableAntiAliasing();
        }else{
        //if ... else
            ofDisableAntiAliasing();
        }
    }
}

//--------------------------------------------------------------
void ofApp::keyReleased  (int key){
    
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
void ofApp::windowResized(int w, int h){
    
}

//--------------------------------------------------------------
void ofApp::gotMessage(ofMessage msg){
    
}

//--------------------------------------------------------------
void ofApp::dragEvent(ofDragInfo dragInfo){ 
    
}