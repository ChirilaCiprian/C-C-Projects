#pragma once
#include "Car.h"
#include <string>
class Mercedes:public Car
{
public:
	Mercedes();
	~Mercedes();
	std::string GetName();
	int GetFuel_Capacity();
	int GetAverageSpeed();
	double GetFuel_Consumption();
	void SetForRace(Weather W);
};

