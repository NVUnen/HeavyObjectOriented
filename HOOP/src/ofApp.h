#pragma once

#include "ofMain.h"
#include "Particle2.hpp"

class ofApp : public ofBaseApp{

	public:
		void setup();
		void update();
		void draw();

		void keyPressed(int key);
    
    Particle part1;
    
    
    
		
};
