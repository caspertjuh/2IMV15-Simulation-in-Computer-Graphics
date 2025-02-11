#pragma once

#include "Solver.h"

class MidPoint : public Solver
{
public:
	void simulation_step(std::vector<Particle*> pVector, std::vector<Force*> fVector, std::vector<Constraint*> cVector, float dt) override;
};