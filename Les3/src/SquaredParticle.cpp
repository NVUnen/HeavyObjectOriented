#include "SquaredParticle.hpp"

SquaredParticle::SquaredParticle(int startX, int StartY) : Particle(startX, StartY) {
    curve = ofVec2f(ofRandom(-5, 5),
                    ofRandom(-5, 5));
}


void SquaredParticle::move() {
    
    position += speed;
    curve.rotate(2);
    position += curve;
}
