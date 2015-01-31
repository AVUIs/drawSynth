//  DRAWPOLYGONS_v02
//
//  Created by Anto+Creo on 06/01/2015.
//
//

#pragma once

#include "ofMain.h"
#include "ofxXmlSettings.h"
#include "ofHandle.h"
#include "ofxMaxim.h"



#include "ofxOsc.h"

#define HOST "localhost"
#define PORT 12345


class ofApp : public ofBaseApp{
	public:
//        ~ofApp();/* destructor is very useful */

		void setup();
		void update();
		void draw();
		
		void keyPressed(int key);
		void keyReleased(int key);
		void mouseMoved(int x, int y);
		void mouseDragged(int x, int y, int button);
		void mousePressed(int x, int y, int button);
		void mouseReleased(int x, int y, int button);
		void windowResized(int w, int h);
		void dragEvent(ofDragInfo dragInfo);
		void gotMessage(ofMessage msg);
    
        void updateMouseRay();

        vector <ofPoint> myPoints;
        ofPoint mousePos;
        ofColor colorPicked;
        ofRectangle colorPickerRect;
        ofRectangle stage;
        ofVec3f loc;
    

        float butRadius;
        float butAlpha;
        float randomZ, actualZ;
        int alpha;
    
        bool open, ableClick,bFullscreen,running, curved;
        float distance, xt,yt;
        float handlerRadius, colorSq;
        float directionX,directionY;

        string curvedVal;
    
        ofImage img;
        vector <ofColor> selectedColor;
    
        ofFbo pickerFbo;
        ofFbo polyFbo;
    
        ofLight light;
    
    ///////MAIN FUNCTIONS////////
        void colorPicker();
        void polygons();
     
    
        void saveXml();
    
    //////////// draggable vertices ////////
    
    vector <draggableVertex> curveVertices;
    
    
    
    //child App
    void openChildApp ();
    
    
    ofxOscSender sender;
    
    ////////////maximilian
    
    void audioRequested 	(float * input, int bufferSize, int nChannels); /* output method */
    void audioReceived 	(float * input, int bufferSize, int nChannels); /* input method */
    
    int		initialBufferSize; /* buffer size */
    int		sampleRate;
    
    
    /* stick you maximilian stuff below */
    
    double wave, wave2,sample,outputs[2];
    ofxMaxiMix mymix;
    ofxMaxiOsc sine1;
    ofxMaxiSample beats,beat;
    
    maxiOsc sineBank[100];//let's create an oscillator and give it a name.
    maxiOsc myCounter,mySquare;//these oscillators will help us count and play sound
//    int CurrentCount;//we're going to put the current count in this variable so that we can use it more easily.


    
    ofEasyCam myCam;
    bool camActive;
    bool screenAuto;
    
    
    
    
    
    ///////////polysynth
    
    //This shows how to use maximilian to build a polyphonic synth.
    
    //These are the synthesiser bits
    maxiOsc VCO1[6],VCO2[6],LFO1[6],LFO2[6];
    maxiFilter VCF[6];
    maxiEnvelope ADSR[6];
    
    //These are the control values for the envelope
    
    double adsrEnv[8]={1,5,0.125,100,0.125,200,0,1000};
    
    //This is a bunch of control signals so that we can hear something
    
    maxiOsc timer;//this is the metronome
    int currentCount,lastCount,voice=0;//these values are used to check if we have a new beat this sample
    
    //and these are some variables we can use to pass stuff around
    
    double VCO1out[6],VCO2out[6],LFO1out[6],LFO2out[6],VCFout[6],ADSRout[6],mix,pitch[6];
    
    
    
    
    
};
