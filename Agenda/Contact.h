#pragma once
#include <string>
using namespace std;
class Contact {
public:
	virtual string GetName() = 0;
	virtual void print() = 0;
	virtual bool IsFriend() = 0;
protected:
	string name;
};