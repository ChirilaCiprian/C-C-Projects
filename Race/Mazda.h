#pragma once
#include "Car.h"
#include <string>
class Mazda:public Car
{
public:
	Mazda();
	~Mazda();
	std::string GetName();
	int GetFuel_Capacity();
	int GetAverageSpeed();
	double GetFuel_Consumption();
	void SetForRace(Weather W);
};

