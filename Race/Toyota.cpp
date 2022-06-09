#include "Toyota.h" 
Toyota::Toyota()
{
	this->name = "Toyota";
	this->fuel_capacity = 50;
}
Toyota::~Toyota()
{
	this->fuel_capacity = 0;
	this->averagespeed = 0;
	this->fuel_consumption = 0;
}

std::string Toyota::GetName()
{
	return this->name;
}

int Toyota::GetFuel_Capacity()
{
	return this->fuel_capacity;
}

int Toyota::GetAverageSpeed()
{
	return this->averagespeed;
}

double Toyota::GetFuel_Consumption()
{
	return this->fuel_consumption;
}

void Toyota::SetForRace(Weather w)
{
	if (w == 0)
	{
		this->averagespeed = 105;
		this->fuel_consumption = 8.9;
	}
	if (w == 1)
	{
		this->averagespeed = 94;
		this->fuel_consumption = 10.3;
	}
	if (w == 2)
	{
		this->averagespeed = 140;
		this->fuel_consumption = 8;
	}
}