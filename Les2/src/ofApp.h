#pragma once

#include "ofMain.h"
#include "Particle2.hpp"
#include "squaredParticle.hpp"


class ofApp : public ofBaseApp{

	public:
		void setup();
		void update();
		void draw();

		void keyPressed(int key);
    
        void setRandomColour(Particle* particle);
    
        Particle part1;
        squaredParticle part2;
    
    
    
		
};
