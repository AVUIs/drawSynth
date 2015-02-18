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
#include "ofxTuioClient.h"
//#include "ofxTuioServer.h"



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
    
    void touchDown(ofTouchEventArgs & touch);
    void touchUp(ofTouchEventArgs & touch);
    void touchMoved(ofTouchEventArgs & touch);

    
    //////////// draggable vertices ////////
    
    vector <draggableVertex> curveVertices;
    
    
    
    //child App
    void openChildApp ();
    
    
    ofxOscSender sender;
    ofxOscReceiver receiver;
    
    ofxTuioClient myTuioClient;
    
    ofEasyCam myCam;
    bool camActive;
    bool screenAuto;
    
    ////////////maximilian
    
    void audioRequested 	(float * input, int bufferSize, int nChannels); /* output method */
    void audioReceived 	(float * input, int bufferSize, int nChannels); /* input method */
    
    int		initialBufferSize; /* buffer size */
    int		sampleRate;
    

    
    
    double f0,f1,f2,rgb,sound2,sound3;
    
   
    
    //////////FM//////////
    
    maxiOsc mySine[10],myOtherSine[10],myLastSine[10],myPhasor[10];//Three oscillators

    maxiOsc sineBank[10];//let's create an oscillator and give it a name.

    double myBass;
    maxiFlanger myFlanger;
    
    ////////////////////////////
    
    
    
    
    
    
    
    
};
