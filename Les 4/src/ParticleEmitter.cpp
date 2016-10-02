#include "ParticleEmitter.hpp"
#include "CurvingParticle.h"
#include "ColoredParticle.hpp"

Particle* ParticleEmitter::emit() {
    Particle* newParticle;
    
    if (ofRandom(1) > (1 - curvingParticleRatio))
    {
        newParticle = new CurvingParticle(originX, originY);
    }
        else if (ofRandom(1) > (1 - curvingParticleRatio))
    {
        newParticle = new Particle(originX, originY);
    }
        else (ofRandom(1) > (1 - curvingParticleRatio));
    {
        newParticle = new ColoredParticle(originX, originY);
    }
    
    newParticle->setColours(ofColor::white, inner, outer);
    
    return newParticle;
}

void ParticleEmitter::setCurvingParticleRatio(float ratio) {
    curvingParticleRatio = ratio;
}

void ParticleEmitter::setOrigin(int x, int y) {
    originX = x;
    originY = y;
}

void ParticleEmitter::setColours(ofColor innerColour, ofColor outerColor) {
    inner = innerColour;
    outer = outerColor;
}
