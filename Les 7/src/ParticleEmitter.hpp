#pragma once


#include "Particle.hpp"

class ParticleEmitter {
public:
    
    //Singleton
    static ParticleEmitter* instance();
    
    void setOrigin(int x, int y);
    
    void setCurvingParticleRatio(float ratio);
    
    void setColours(ofColor innerColour, ofColor outerColor);
    
    Particle* emit();
    
private:
    
    //Singleton
    ParticleEmitter();
    
    int originX;
    int originY;
    float curvingParticleRatio;
    ofColor inner;
    ofColor outer;
    
    static ParticleEmitter* theOnlyOne;
};
