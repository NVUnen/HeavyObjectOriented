#include "Particle.h"

Particle::Particle(int startX, int startY, long lifespan) {
    radius = ofRandom(30, 50);
    position = ofPoint(startX,
                       startY);
    
    lifetime = lifespan;
    
    
    speed = ofVec2f(ofRandom(-5, 5),
                    ofRandom(-5, 5));
    
    innerColour = ofColor(31, 127, 255, 127);
    outerColour = ofColor(128, 255, 255, 15);
}

void Particle::setColours(ofColor center, ofColor inner, ofColor outer) {
    centerColour = center;
    innerColour = inner;
    outerColour = outer;
}

void Particle::move() {
    position += speed;
}


void Particle::draw() {
    ofSetColor(outerColour);
    ofDrawCircle(position.x, position.y, radius * 2.0);
    
    ofSetColor(innerColour);
    ofDrawCircle(position.x, position.y, radius);
    
    ofSetColor(centerColour);
    ofDrawCircle(position.x, position.y, radius * 0.25);
}

void Particle::updateLifetime(){
    lifetime -=1;
    if(lifetime == 0){
        cout << "lifetime = 0"
        
    }
}
