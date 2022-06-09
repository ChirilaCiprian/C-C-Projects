#pragma once
#include "Car.h"
#include <string>
class Ford:public Car
{
public:
	Ford();
	~Ford();
	std::string GetName();
	int GetFuel_Capacity();
	int GetAverageSpeed();
	double GetFuel_Consumption();
	void SetForRace(Weather W);
};

