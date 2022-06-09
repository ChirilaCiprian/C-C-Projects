#include "Mazda.h"
Mazda::Mazda()
{
	this->name = "Mazda";
	this->fuel_capacity = 40;
}
Mazda::~Mazda()
{
	this->fuel_capacity = 0;
	this->averagespeed = 0;
	this->fuel_consumption = 0;
}

std::string Mazda::GetName()
{
	return this->name;
}

int Mazda::GetFuel_Capacity()
{
	return this->fuel_capacity;
}

int Mazda::GetAverageSpeed()
{
	return this->averagespeed;
}

double Mazda::GetFuel_Consumption()
{
	return this->fuel_consumption;
}

void Mazda::SetForRace(Weather w)
{
	if (w == 0)
	{
		this->averagespeed = 118;
		this->fuel_consumption = 7.9;
	}
	if (w == 1)
	{
		this->averagespeed = 129;
		this->fuel_consumption = 8.7;
	}
	if (w == 2)
	{
		this->averagespeed = 150;
		this->fuel_consumption = 8.2;
	}
}