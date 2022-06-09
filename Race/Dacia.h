#pragma once
#include "Car.h"
class Dacia: public Car
{
public:
	Dacia();
	~Dacia();
	std::string GetName();
	int GetFuel_Capacity();
	int GetAverageSpeed();
	double GetFuel_Consumption();
	void SetForRace(Weather W);
};

