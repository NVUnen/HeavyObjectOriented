#pragma once


#include "Particle.hpp"

class ParticleEmitter {
public:
    void setOrigin(int x, int y);
    
    void setCurvingParticleRatio(float ratio);
    
    void setColours(ofColor innerColour, ofColor outerColor);
    
    void setLifetime(long time);
    
    Particle* emit();
    
private:
    long lifetime;
    int originX;
    int originY;
    float curvingParticleRatio;
    ofColor inner;
    ofColor outer;
};
