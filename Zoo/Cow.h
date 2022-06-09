#pragma once
#include "Animal.h"
class Cow:public Animal {
	
public:
	string GetName() { return "Cow"; }
	bool CanFly() { return false; }
	bool IsAFiSh() { return false; }
};