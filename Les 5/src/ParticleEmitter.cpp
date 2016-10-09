#include "ParticleEmitter.hpp"
#include "CurvingParticle.hpp"
#include "ColoredParticle.hpp"

Particle* ParticleEmitter::emit() {
    Particle* newParticle;
    
    if (ofRandom(1) > (1 - curvingParticleRatio)) {
        setLifetime(200);
        newParticle = new CurvingParticle(originX, originY, time);
        newParticle = new ColoredParticle(originX, originY, time);
    } else {
        setLifetime(200);
        newParticle = new Particle(originX, originY, time);
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

void ParticleEmitter::setLifetime(long time)
{
    lifetime = time;
}
