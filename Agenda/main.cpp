#include <iostream>
#include "Agenda.h"
#include "Prieten.h"
#include "Coleg.h"
#include "Cunoscut.h"
using namespace std;
int main()
{
	Agenda AG;
	//Prieten* P1("Popescu", "0712341450", "Adress", "1/10/1990");
	Contact *p1 = new Prieten("Popescu", "0712341450", "Str. nr1", "1/10/1990");
	Contact* p2 = new Coleg("Alex", "0792803900", "Str. nr2", "Firma");
	Contact* p3 = new Cunoscut("Ciprian", "0723045829");
	Contact* p4 = new Prieten("Dan", "0745341450", "Str. nr3", "13/7/1983");
	Contact* p5 = new Prieten("Mihai", "0714746450", "Str. nr2", "5/11/2000");
	AG.AddContact(p1);
	AG.AddContact(p2);
	AG.AddContact(p3);
	AG.AddContact(p4);
	AG.AddContact(p5);
	AG.Delete_Name("Dan");
	AG.PrintAgenda();
	vector<Contact*> V;
	V = AG.Prieteni();
	for (auto it : V)
		cout << it->GetName() << endl;
	return 0;
}