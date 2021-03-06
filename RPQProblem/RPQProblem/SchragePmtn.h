#pragma once
#include "BaseAlgorithm.h"

#include "Fwd.h"

class SchragePmtn : public BaseAlgorithm
{
public:
	SchragePmtn() = default;
	~SchragePmtn() = default;

	// Inherited via BaseAlgorithm
	virtual RPQTasks OrderRPQs(RPQTasks& rawTasks, int numberOfTasks) override;

private:
	RPQTasks notReady, ready;
};

