#pragma once

#include "ofMain.h"
#include "Particle.hpp"
#include "ParticleEmitter.hpp"
#include "ParticleReaper.hpp"

class ofApp : public ofBaseApp {
    
public:
    void setup();
    
    void update();
    
    void draw();


private:
    
    vector<Particle*> particles;
    
    ParticleEmitter* emitter;

    
    ParticleReaper reaper;
};
