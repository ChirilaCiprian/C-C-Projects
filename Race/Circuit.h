#pragma once
#include <vector>
#include "Car.h"
#include "Weather.h"
#include <iostream>
using namespace std;
class Circuit
{
private:
	Weather W;
	double length = 0;
	vector<Car*> Cars;
	double time[10];
public:
	void SetLength(int lg);
	void SetWeather(Weather wth);
	void AddCar(Car *C);
	void Race();
	void ShowFinalRanks();
	void ShowWhoDidNotFinish();
};

