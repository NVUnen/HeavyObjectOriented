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
    
    //zijn contante waarden die niet veranderen
    const vector<Particle*> particles;
    
    const ParticleEmitter emitter1;
    const ParticleEmitter emitter2;
    const ParticleReaper reaper;
};
