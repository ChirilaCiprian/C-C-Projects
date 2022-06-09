#include "Dacia.h"
#include <iostream>
#include "Weather.h"
Dacia::Dacia()
{
		this->name = "Dacia";
		this->fuel_capacity = 35;
}
Dacia::~Dacia()
{
	this->fuel_capacity = 0;
	this->averagespeed = 0;
	this->fuel_consumption = 0;
}

std::string Dacia::GetName()
{
	return this->name;
}

int Dacia::GetFuel_Capacity()
{
	return this->fuel_capacity;
}

int Dacia::GetAverageSpeed()
{
	return this->averagespeed;
}

double Dacia::GetFuel_Consumption()
{
	return this->fuel_consumption;
}

void Dacia::SetForRace(Weather w)
{
	if (w == 0)
	{
		this->averagespeed = 98;
		this->fuel_consumption = 7.9;
	}
	if (w == 1)
	{
		this->averagespeed = 70;
		this->fuel_consumption = 8.7;
	}
	if (w == 2)
	{
		this->averagespeed = 120;
		this->fuel_consumption = 7.2;
	}
}
