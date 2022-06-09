#include "Mercedes.h"
Mercedes::Mercedes()
{
	this->name = "Mercedes";
	this->fuel_capacity = 60;
}
Mercedes::~Mercedes()
{
	this->fuel_capacity = 0;
	this->averagespeed = 0;
	this->fuel_consumption = 0;
}

std::string Mercedes::GetName()
{
	return this->name;
}

int Mercedes::GetFuel_Capacity()
{
	return this->fuel_capacity;
}

int Mercedes::GetAverageSpeed()
{
	return this->averagespeed;
}

double Mercedes::GetFuel_Consumption()
{
	return this->fuel_consumption;
}

void Mercedes::SetForRace(Weather w)
{
	if (w == 0)
	{
		this->averagespeed = 140;
		this->fuel_consumption = 11.1;
	}
	if (w == 1)
	{
		this->averagespeed = 124;
		this->fuel_consumption = 12;
	}
	if (w == 2)
	{
		this->averagespeed = 183;
		this->fuel_consumption = 11.4;
	}
}