#pragma once

#include "ofMain.h"
#include "Particle.hpp"
#include "ParticleEmitter.hpp"

class ofApp : public ofBaseApp {
    
public:
    void setup();
    
    void update();
    
    void draw();
    
    vector<Particle*> particles;
    
    ParticleEmitter emitter1;
    ParticleEmitter emitter2;
};
