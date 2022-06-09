#pragma once
#include "Animal.h"
class Shark :public Animal{
	string GetName() { return "Shark"; }
	bool CanFly() { return false; }
	bool IsAFiSh() { return true; }
};