#include "ColoredParticle.hpp"

ColoredParticle::ColoredParticle(int startX, int startY) : Particle(startX, startY) {
    curve = ofVec2f(ofRandom(-5, 5),
                    ofRandom(-5, 5));
    
    
}

void ColoredParticle::move() {
    position += speed;
    curve.rotate(2);
    position += curve;
    

}

