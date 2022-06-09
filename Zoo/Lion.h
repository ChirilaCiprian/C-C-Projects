#pragma once
#include "Feline.h"
class Lion:public Feline{
public:
	int GetSpeed() { return 80; }
	string GetName() { return "Lion"; }
	bool CanFly() { return false; }
	bool IsAFiSh() { return false; }
};