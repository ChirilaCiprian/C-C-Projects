#include "Ford.h"
Ford::Ford()
{
	this->name = "Ford";
	this->fuel_capacity = 53;
}
Ford::~Ford()
{
	this->fuel_capacity = 0;
	this->averagespeed = 0;
	this->fuel_consumption = 0;
}

std::string Ford::GetName()
{
	return this->name;
}

int Ford::GetFuel_Capacity()
{
	return this->fuel_capacity;
}

int Ford::GetAverageSpeed()
{
	return this->averagespeed;
}

double Ford::GetFuel_Consumption()
{
	return this->fuel_consumption;
}

void Ford::SetForRace(Weather w)
{
	if (w == 0)
	{
		this->averagespeed = 110;
		this->fuel_consumption = 7.9;
	}
	if (w == 1)
	{
		this->averagespeed = 100;
		this->fuel_consumption = 8.7;
	}
	if (w == 2)
	{
		this->averagespeed = 145;
		this->fuel_consumption = 7.2;
	}
}