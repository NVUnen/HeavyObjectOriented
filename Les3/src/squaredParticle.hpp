#pragma once


#include "ofMain.h"
#include "Particle.hpp"

class squaredParticle : public Particle {
public:
    
    squaredParticle();
    
    void move();
    
    ofVec2f curve;
    ofVec2f squared;
};