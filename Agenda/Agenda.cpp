#include "Agenda.h"

Contact* Agenda::Search_Name(string Name)
{
	for (auto it : A)
	{
		if (it->GetName() == Name)
			return it;
	}
}
vector<Contact*> Agenda::Prieteni()
{
	vector<Contact*> P;
	for (auto it : A)
		if (it->IsFriend()==true)
			P.push_back(it);
	return P;
}
void Agenda::Delete_Name(string Nume)
{
	for (int i = 0; i < A.size(); i++)
	{
		if (A[i]->GetName() == Nume)
		{
			A.erase(A.begin() + i);
			break;
		}
	}
}
void Agenda::AddContact(Contact* ToAdd)
{
	A.push_back(ToAdd);
}

void Agenda::PrintAgenda()
{
	for (auto it : A)
		it->print();
}
