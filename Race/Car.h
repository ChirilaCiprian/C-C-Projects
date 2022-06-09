#pragma once
#include "Weather.h"
#include <string>
class Car
{	
protected:
	std::string name;
	int fuel_capacity = 0, averagespeed = 0;
	double fuel_consumption = 0;
public:
	virtual std::string GetName() = 0;
	virtual	int GetFuel_Capacity() = 0;
	virtual int GetAverageSpeed() = 0;
	virtual double GetFuel_Consumption() = 0;
	virtual void SetForRace(Weather W) = 0;
};