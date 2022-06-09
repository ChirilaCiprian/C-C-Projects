#pragma once
#include "Contact.h"
#include <string>
#include <vector>
using namespace std;
class Agenda
{
private:
	vector<Contact*> A;
public:
	Contact* Search_Name(string Name);
	vector<Contact*> Prieteni();
	void Delete_Name(string Nume);
	void AddContact(Contact* ToAdd);
	void PrintAgenda();
};

