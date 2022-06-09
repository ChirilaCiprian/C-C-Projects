#include "Zoo.h"

vector<Animal*> Zoo::GetFishes()
{
	vector<Animal*>Fish;
	for (auto it : animals)
		if (it->IsAFiSh() == true)
			Fish.push_back(it);
	return Fish;
}

vector<Animal*> Zoo::GetBirds()
{
	vector<Animal*>Birds;
	for (auto it : animals)
		if (it->CanFly() == true)
			Birds.push_back(it);
	return Birds;
}

vector<Animal*> Zoo::GetMammals()
{
	vector<Animal*>Mammals;
	for (auto it : animals)
		if (it->GetName() == "Tiger" || it->GetName() == "Lion" || it->GetName() == "Cow")
			Mammals.push_back(it);
	return Mammals;
	
}

vector<Feline*> Zoo::GetFelines()
{
	
	vector<Feline*>Felina;
	for (auto it : animals)
		if (it->GetName() == "Tiger" || it->GetName() == "Lion")
		{
			Feline* i = dynamic_cast<Feline*>(it);
			Felina.push_back(i);
		}
	return Felina;
}

int Zoo::GetTotalAnimals()
{
	return animals.size();
}

void Zoo::operator+=(Animal* A)
{
	animals.push_back(A);
}

bool Zoo::operator()(string name)
{
	for (auto it : animals)
		if (it->GetName() == name)
			return true;
	return false;
}
