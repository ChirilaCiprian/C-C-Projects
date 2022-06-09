#pragma once
#include "Animal.h"
#include "Feline.h"
#include <vector>
class Zoo
{
private:
	vector <Animal*> animals;
public:
	vector<Animal*>GetFishes();
	vector<Animal*>GetBirds();
	vector<Animal*>GetMammals();
	vector<Feline*>GetFelines();
	int GetTotalAnimals();
	void operator+=(Animal* A);
	bool operator()(string name);
};

