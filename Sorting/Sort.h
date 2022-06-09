#include <stdlib.h>
#include <iostream>
#include <stdarg.h>
class Sort
{
    // add data members
    int* vector{};
    int NrElements{};
public:
    // add constuctors
    Sort(int NrElements, int minx, int maxx);        // 1. random values between minx and manx
    Sort();                                          // 2. initialization list
    Sort(int *vector, int Nr);                       // 3. existing vector
    Sort(int count, ...);                            // 4. varidadic parameters
    Sort(char* str);                                 // 5. string
    void InsertSort(bool ascendent = false);
    void QuickSort(bool ascendent = false);
    void BubbleSort(bool ascendent = false);
    void Print();
    int  GetElementsCount();
    int  GetElementFromIndex(int index);
};