#pragma once
#include "Contact.h"
#include <iostream>
#include <string>
using namespace std;
class Prieten:public Contact
{
private:
	string adress, phone, bday;
public:
	Prieten() {};
	Prieten(string nume, string phone, string adress, string bday);
	string GetName() { return name; }
	bool IsFriend() { return true; }
	void print() { cout << "Nume: " << name << "  Phone: " << phone << "  Adress: " << "  Birthday: " << bday << endl; }
};

