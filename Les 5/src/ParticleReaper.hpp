
#pragma once
#include "Particle.hpp"

class ParticleReaper
{
    public:
        ParticleReaper();
    
        void cleanup(vector<Particle*>& particles);

};
