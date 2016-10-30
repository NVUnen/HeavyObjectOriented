
#pragma once


#include "Particle.hpp"

class ParticleEmitter {
public:
    void setOrigin(int x, int y);
    
    void setSquaredParticleRatio(float ratio);
    
    void setColours(ofColor innerColour, ofColor outerColor);
    
    Particle* emit();
    
private:
    int originX;
    int originY;
    float squaredParticleRatio;
    ofColor inner;
    ofColor outer;
};
