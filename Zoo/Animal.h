#pragma once
#include <string>
using namespace std;
class Animal {
public:
	virtual string GetName() = 0;
	virtual bool CanFly() = 0;
	virtual bool IsAFiSh() = 0;
};