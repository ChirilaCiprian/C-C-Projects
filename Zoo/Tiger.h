#pragma once
#include "Feline.h"
class Tiger:public Feline {
public:
	int GetSpeed() { return 100; }
	string GetName() { return "Tiger"; }
	bool CanFly() { return false; }
	bool IsAFiSh() { return false; }
};