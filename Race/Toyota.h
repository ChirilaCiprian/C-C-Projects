#pragma once
#include "Car.h"
#include <string>
class Toyota:public Car
{
public:
	Toyota();
	~Toyota();
	std::string GetName();
	int GetFuel_Capacity();
	int GetAverageSpeed();
	double GetFuel_Consumption();
	void SetForRace(Weather W);
};

