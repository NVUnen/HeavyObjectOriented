#include "ColoredParticle.hpp"

ColoredParticle::ColoredParticle(int startX, int startY) : Particle(startX, startY) {
    curve = ofVec2f(ofRandom(0, 10),
                    ofRandom(0, 10));
    
    speed = ofVec2f(ofRandom(2, 10),
                    ofRandom(2, 10));
    
}

void ColoredParticle::move() {
    position += speed;
    curve.rotate(2);
    position += curve;
    

}

