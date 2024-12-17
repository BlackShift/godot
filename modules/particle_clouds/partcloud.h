#pragma once

#include "core/object/object.h"
#include "scene/3d/gpu_particles_3d.h"

class ParticleUtilities : public Object {
	GDCLASS(ParticleUtilities, Object);

public:
	static const RID get_particleRD_buffer(const GPUParticles3D& system);

};
