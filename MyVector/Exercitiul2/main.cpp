#include <iostream>
using namespace std;
#include "MyVector.h"
int main() {
	MyVector<const char*> V;
	V.Push("unu");
	V.Push("doi");
	V.Push("trei");
	V.Push("patru");
	V.Push("cinci");
	V.Push("sase");
	V.Set("....", 2);
	V.insert("zero", 0);
	V.Sort();
	V.Print();
	cout << V.FirsIndexOf("zero");
	/*MyVector<int> N;
	N.Push(12);
	N.Push(2);
	N.Push(3);
	N.Push(4);
	N.Push(5);
	N.Push(6);
	N.Push(7);
	N.insert(101, 0);
	N.Sort();
	N.Print();*/
	
}
