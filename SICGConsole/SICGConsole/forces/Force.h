#pragma once
#ifdef __APPLE__
#include "gfx/mat2.h"
#else
#include "..\include\gfx\mat2.h"
#endif

#include "../objects/Particle.h"
#include <vector>

// Abstract class
class Force {
public:
	virtual ~Force() = default;

	virtual void target(std::vector<Particle*> particles) = 0;
	virtual void draw() = 0;
	virtual void apply() = 0;
	std::vector<Particle*> particles;
	void reset() {
		for (Particle* p : particles) {
			p->m_Force = Vec3f(0.0, 0.0, 0.0);
		}
	}
};