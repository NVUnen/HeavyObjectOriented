#include "ColoredParticle.hpp"

ColoredParticle::ColoredParticle(int startX, int startY) : Particle(startX, startY) {
    curve = ofVec2f(ofRandom(-5, 5),
                    ofRandom(-5, 5));
    
    innerColour = ofColor(50, 80, 255, 27);
    outerColour = ofColor(23, 100, 80, 15);
    
    speed = ofVec2f(ofRandom(-1, 1),
                    ofRandom(-1, 1));
    
    
}

void ColoredParticle::move() {
    position += speed;
    curve.rotate(2);
    position += curve;
    position += speed;
    curve.rotate(2);
    position += curve;

}

void Particle::draw() {
    ofSetColor(outerColour);
    ofDrawCircle(position.x, position.y, radius * 5.0);
    
    ofSetColor(innerColour);
    ofDrawCircle(position.x, position.y, radius);
    
    ofSetColor(centerColour);
    ofDrawCircle(position.x, position.y, radius * 2.00);
}
