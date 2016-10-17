#pragma once


#include "Particle.hpp"

class ParticleEmitter {
public:
    void setOrigin(int x, int y);
    
    void setCurvingParticleRatio(float ratio);
    
    void setColours(ofColor innerColour, ofColor outerColor);
    
    //Singleton
    static ParticleEmitter* instance();
    void normalMethod();
    
    
    Particle* emit();
    
private:
    
    //Singleton
    ParticleEmitter();
    static ParticleEmitter* theOnlyOne;
    
    
    int originX;
    int originY;
    float curvingParticleRatio;
    ofColor inner;
    ofColor outer;
};
