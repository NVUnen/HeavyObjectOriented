#pragma once


#include "ofMain.h"
#include "Particle.h"

class ColoredParticle : public Particle {
public:
    ColoredParticle(int startX, int startY);
    
    void move();
    void draw();
    
    ofVec2f curve;
    ofVec2f speed;
    
    ofColor innerColour;
    ofColor outerColour;
};
