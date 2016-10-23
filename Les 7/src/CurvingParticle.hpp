#pragma once


#include "ofMain.h"
#include "Particle.hpp"

class CurvingParticle : public Particle {
public:
    CurvingParticle(int startX, int startY);
    virtual ~CurvingParticle();
    
    void move();
    
    ofVec2f curve;
};
