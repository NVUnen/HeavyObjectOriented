#include "CurvingParticle.hpp"

CurvingParticle::CurvingParticle(int startX, int startY, long lifetime) : Particle(startX, startY, lifetime) {
    curve = ofVec2f(ofRandom(-5, 5),
                    ofRandom(-5, 5));
}

void CurvingParticle::move() {
    position += speed;
    curve.rotate(2);
    position += curve;
}
