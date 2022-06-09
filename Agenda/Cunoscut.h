#pragma once
#include "Contact.h"
#include <iostream>
#include <string>
using namespace std;
class Cunoscut:public Contact
{
private:
	string phone;
public:
	Cunoscut(string nume, string Phone);
	string GetName() { return name; };
	bool IsFriend() { return false; }
	void print() { cout << "Nume: " << name << "  Phone: " << phone << endl; }

};

