
#pragma once


#include "Particle.hpp"

class ParticleReaper {
public:
    //deze methode werkt met de variabelen die niet in het object zitten
    void cleanup(vector<Particle*>& particles) const;
};
