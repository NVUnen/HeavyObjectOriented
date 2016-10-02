#pragma once

#include "ofMain.h"
#include "Particle.hpp"

#define MAX_PARTICLES 50

class particleEmitter {
    
public:

    float radius;
    long lifetime;
    ofVec2f speed;
    ofPoint position;
    ofColor centerColour = ofColor::white;
    ofColor innerColour;
    ofColor outerColour;
    void keyPressed(int key);
    particleEmitter();
    void setup();
    void update();
    virtual void move();
    void draw();
    void setColours(ofColor center, ofColor inner, ofColor outer);
    void setSpeed(ofVec2f speed);
    void setPosition(ofPoint position);
    void setRandomColour(Particle* particle);
    
private:
    Particle* particles[MAX_PARTICLES];

};