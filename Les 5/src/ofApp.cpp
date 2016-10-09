#include "ofApp.h"

void ofApp::setup() {
    ofBackground(ofColor::black);
    
    emitter1 = ParticleEmitter();
    emitter1.setOrigin(100, 100);
    emitter1.setCurvingParticleRatio(0.1);
    emitter1.setColours(ofColor(31, 127, 255, 127), ofColor(128, 255, 255, 15));
    
    emitter2= ParticleEmitter();
    emitter2.setOrigin(ofGetWidth() - 100, ofGetHeight() - 100);
    emitter2.setCurvingParticleRatio(0.8);
    emitter2.setColours(ofColor(227, 47, 27, 127), ofColor(247, 140, 129, 15));
    
    emitter3 = ParticleEmitter();
    emitter3.setOrigin(400, 400);
    emitter3.setCurvingParticleRatio(2);
    emitter3.setColours(ofColor(100, 200, 59, 90), ofColor(100, 255, 1, 15));
}

void ofApp::update() {
    for (int i = 0; i < particles.size(); ++i) {
        particles[i]->move();
        particle[i]->updateLifetime();
    }
    
    for (vector<Particle>::iterator i = particles.begin();i != particles.end();i++) {
        i->move();
        i->UpdateLifetime();
    }
    
    
    Particle* freshParticle = emitter1.emit();
    particles.push_back(freshParticle);
    
    Particle* freshParticle2 = emitter2.emit();
    particles.push_back(freshParticle2);
    
    Particle* freshParticle3 = emitter3.emit();
    particles.push_back(freshParticle3);
}

void ofApp::draw() {
    for (int i = 0; i < particles.size(); ++i) {
        particles[i]->draw();
    }
}
