#include "ParticleEmitter.hpp"
#include "SquaredParticle.hpp"

Particle* ParticleEmitter::emit() {
    Particle* newParticle;
    
    if (ofRandom(1) > (1 - squaredParticleRatio)) {
        newParticle = new SquaredParticle(originX, originY);
    } else {
        newParticle = new Particle(originX, originY);
    }
    newParticle->setColours(ofColor::white, inner, outer);
    
    return newParticle;
}

void ParticleEmitter::setSquaredParticleRatio(float ratio) {
    squaredParticleRatio = ratio;
}

void ParticleEmitter::setOrigin(int x, int y) {
    originX = x;
    originY = y;
}

void ParticleEmitter::setColours(ofColor innerColour, ofColor outerColor) {
    inner = innerColour;
    outer = outerColor;
}




