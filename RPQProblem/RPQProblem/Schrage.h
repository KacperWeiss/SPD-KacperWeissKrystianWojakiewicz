#pragma once
#include "BaseAlgorithm.h"

#include "Fwd.h"

class Schrage : public BaseAlgorithm
{
public:
	Schrage() = default;
	~Schrage() = default;

	// Inherited via BaseAlgorithm
	virtual RPQTasks orderRPQs(RPQTasks rawTasks, int numberOfTasks) override;
	virtual int CalculateCmax(const RPQTasks & data, const int numberOfTasks) override;

private:
	RPQTasks notReady, ready, ordered;

};

