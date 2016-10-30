#pragma once


#include "ofMain.h"
#include "Particle.hpp"

class SquaredParticle : public Particle {
public:
    
    SquaredParticle(int startX, int startY);
    
    void move();
    
    ofVec2f curve;
};
