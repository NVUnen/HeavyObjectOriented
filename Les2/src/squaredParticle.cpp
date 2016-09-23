#include "squaredParticle.hpp"

squaredParticle::squaredParticle() {
    curve = ofVec2f(ofRandom(-5, 5),
                    ofRandom(-5, 5));
    
    squared = ofVec2f(ofRandom(-1,1),
                      ofRandom(-1,1));
}

void squaredParticle::move() {
    
    position += speed;
    curve.rotate(2);
    position += curve;
    squared.rotate(180);
}