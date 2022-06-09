#include "Sort.h"
#include <iostream>
using namespace std;
int main() {
	Sort S1(10, 1, 100);
	S1.Print();
	S1.BubbleSort();
	S1.Print();
	int* v = (int*)(malloc(10 * sizeof(int)));
	v[0] = 10, v[1] = 20, v[2] = 3, v[3] = 8, v[4] = 4;
	Sort S3(v, 5);
	S3.Print();
	S3.InsertSort();
	S3.Print();
	Sort S4(7, 10, 23, 4, 19, 3, 2, 6);
	S4.Print();
	S4.QuickSort();
	S4.Print();
	char c[] = "1,4,9,2,32,19,3";
	Sort S5(c);
	S5.Print();
	S5.QuickSort();
	S5.Print();
	Sort S2();
	return 0;
}