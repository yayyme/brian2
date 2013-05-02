#ifndef _BRIAN_BRIANLIB_GROUPS_NEURONGROUP_H
#define _BRIAN_BRIANLIB_GROUPS_NEURONGROUP_H

#include "brianlib/core/base.h"

class NeuronGroup : public BrianObject
{
public:
	// Constructors
	NeuronGroup(string When, scalar Order, Clock &c);
	~NeuronGroup();
	// Methods
	void state_update() {};
	void allocate_memory() {};
	void deallocate_memory() {};
};

#endif
