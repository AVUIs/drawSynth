//
//  ofHandle.h
//  DRAWPOLYGONS_v02
//
//  Created by Anto+Creo on 06/01/2015.
//
//

#ifndef __SYNESTHESYA_DRAWPOLYGONS_v02__ofHandle__
#define __SYNESTHESYA_DRAWPOLYGONS_v02__ofHandle__

#include "ofMain.h"


class draggableVertex {
public:
    // Constructor
    draggableVertex(float xPos, float yPos, float zPos);
    
    // Methods
    void update();
    void draw();
    
    void mouseMoved(int x, int y );
    void mouseDragged(int x, int y, int button);
    void mousePressed(int x, int y, int button);
    void mouseReleased(int x, int y, int button);
    void dragEvent(ofDragInfo dragInfo);
    void gotMessage(ofMessage msg);
    
    // Properties
    float 	x;
    float 	y;
    float   z;
    bool 	bBeingDragged;
    bool 	bOver;
    float 	radius;

};

#endif /* defined(__SYNESTHESYA_DRAWPOLYGONS_v02__ofHandle__) */



