#include <iostream>
#include "Canvas.h"
using namespace std;
int main() {
	Canvas C(50,50);
	C.Clear();
	C.drawLine(40,20, 40, 40,'.');
	C.DrawRect(5, 5, 10, 10,'*');
	C.FillRect(5, 5, 10, 10, '*');
	//C.SetPoint(7, 4, '*');
	C.DrawCircle(20, 20, 10, '*');
	C.FillCircle(20, 20, 10, '*');
	C.Print();
	return 0;
}
