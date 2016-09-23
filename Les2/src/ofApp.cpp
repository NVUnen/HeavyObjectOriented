#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    ofBackground(ofColor::black);
    part1 = Particle();
    part2 = squaredParticle();
    

}

//--------------------------------------------------------------
void ofApp::update(){
    part1.move();
    part2.move();

}

//--------------------------------------------------------------
void ofApp::draw(){
    part1.draw();
    part2.draw();

}

void ofApp::setRandomColour(Particle* particle) {
    float random = ofRandom(10);
    if (random > 3 && random <= 7) {
        particle->setColours(ofColor::white, ofColor(227, 47, 27, 127), ofColor(247, 140, 129, 15));
    } else if (random > 7) {
        particle->setColours(ofColor::white, ofColor(114, 240, 55, 127), ofColor(185, 250, 155, 15));
    }
}

//--------------------------------------------------------------
void ofApp::keyPressed(int key){
    


}

