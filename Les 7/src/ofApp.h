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
    
    void keyPressed(int key);
    
private:
    
    vector<Particle*> particles;
    
    static ParticleEmitter emitter1;
    static ParticleEmitter emitter2;
    static ParticleEmitter emitter3;
    
    ParticleReaper reaper;
};
