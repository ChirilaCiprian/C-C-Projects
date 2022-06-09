#pragma once
#include "Animal.h"
class Eagle :public Animal{
	string GetName() { return "Eagle"; }
	bool CanFly() { return true; }
	bool IsAFiSh() { return false; }

};