#pragma once
#include <stdlib.h> 
#include <iostream>
#include <string>
class Number
{
private:
	// add data members
	std::string value;
	int base=0;
public:
	Number() {};
	Number(const char* value, int base); // where base is between 2 and 16
	~Number() {value.erase(),this->base=0;};
	Number(const Number& ToCopy);
	Number(Number&& ToMove);
	// add operators and copy/move constructor
	void SwitchBase(int newBase);
	void Print();
	int  GetDigitsCount(); // returns the number of digits for the current number
	int  GetBase(); // returns the current base

	bool operator>(Number N);
	bool operator>=(Number N);
	bool operator<(Number N);
	bool operator<=(Number N);
	bool operator==(Number N);
	void operator++();
	void operator--();
	void operator--(int numar);
	int operator[](int index);
	Number operator+(const Number N);
	Number operator-(const Number N);
	Number& operator=(Number&& N);
	Number operator=(const int val);
	Number operator=(const char *val);
	Number operator+=(const Number N);
	
};

