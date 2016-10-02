#pragma once


#include "ofMain.h"
#include "Particle.h"

class ColoredParticle : public Particle {
public:
    ColoredParticle(int startX, int startY);
    
    void move();
    
    ofVec2f curve;
    ofVec2f speed;
    float radius;

};
