#pragma once
#include "Contact.h"
#include <iostream>
#include <string>
using namespace std;
class Coleg:public Contact
{
private:
	string phone, adress, firma;
public:
	Coleg(string nume, string Phone, string Adress, string Firma);
	string GetName() { return name; };
	bool IsFriend() { return false; }
	void print() { cout << "Nume: " << name << "  Phone: " << phone << "  Adress: " << "  Company: " << firma << endl; }
};

