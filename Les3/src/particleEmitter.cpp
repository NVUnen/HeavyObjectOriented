
#include "particleEmitter.hpp"

particleEmitter::particleEmitter(){
    
    radius = ofRandom(10, 50);
    
    innerColour = ofColor(31, 127, 255, 127);
    outerColour = ofColor(128, 255, 255, 15);
    
    
    speed = ofVec2f(ofRandom(-5, 5),
                    ofRandom(-5, 5));
    
    position = ofPoint(ofGetWidth() / 2,
                       ofGetHeight() / 2);
    
}

void particleEmitter::setColours(ofColor center, ofColor inner, ofColor outer) {
    centerColour = center;
    innerColour = inner;
    outerColour = outer;
}

void particleEmitter::setRandomColour(Particle* particle) {
    float random = ofRandom(10);
    if (random > 3 && random <= 7) {
        particle->setColours(ofColor::white, ofColor(227, 47, 27, 127), ofColor(247, 140, 129, 15));
    } else if (random > 7) {
        particle->setColours(ofColor::white, ofColor(114, 240, 55, 127), ofColor(185, 250, 155, 15));
    }
    
}


void particleEmitter::setSpeed(ofVec2f speed)
{
    speed = speed;
}

void particleEmitter::setPosition(ofPoint position)
{
    position = position;
}

void particleEmitter::setup() {
    ofBackground(ofColor::black);
    
    for (int i = 0; i < MAX_PARTICLES; i++) {
        particles[i] = new Particle();
        setRandomColour(particles[i]);
    }
}

void particleEmitter::draw() {
    ofSetColor(outerColour);
    ofDrawCircle(position.x, position.y, radius * 2.0);
    
    ofSetColor(innerColour);
    ofDrawCircle(position.x, position.y, radius);
    
    ofSetColor(centerColour);
    ofDrawCircle(position.x, position.y, radius * 0.25);
    
    for (int i = 0; i < MAX_PARTICLES; ++i)
        particles[i]->draw();
}

void particleEmitter::move(){
    position += speed;
    
}

void particleEmitter::keyPressed(int key) {
    for (int i = 0; i < MAX_PARTICLES; i++) {
        particles[i] = new Particle();
        setRandomColour(particles[i]);
    }
}

void particleEmitter::update() {
    for (int i = 0; i < MAX_PARTICLES; ++i) {
        particles[i]->move();
    }
}

