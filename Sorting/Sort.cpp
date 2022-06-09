#define _CRT_SECURE_NO_WARNINGS
#include "Sort.h"
using namespace std;
Sort::Sort(int Nr_Elements, int minx, int maxx):NrElements{Nr_Elements}
{
	vector = (int*)(malloc(Nr_Elements * sizeof(int)));
	for (int i = 0;i < Nr_Elements;i++)
		vector[i] = minx + rand()%(maxx-minx+1);
}

Sort::Sort():vector(new int[6]{1,2,3,4,5,6})
{
	NrElements = 6;
}

Sort::Sort(int *vector2, int Nr):NrElements{Nr}
{
	vector = (int*)(malloc(Nr * sizeof(int)));
	for (int i = 0;i < Nr;i++)
		this->vector[i] = vector2[i];
}

Sort::Sort(int count, ...)
{
	vector = (int*)(malloc(count * sizeof(int)));
	this->NrElements = count;
	va_list v1;
	va_start(v1, count);
	for (int i = 0;i < count;i++)
		vector[i] = va_arg(v1, int);
	va_end(v1);
}

Sort::Sort(char* str)
{
	char* number;int i = 0, count = 0;;
	while (str[i] != NULL)
	{
		if (str[i] == ',')
			count++;
		i++;
	}
	i = 0;
	NrElements = count+1;
	vector = (int*)(malloc(NrElements * sizeof(int)));
	number = strtok(str, ",");
	//vector[i] = atoi(number);
	//cout << str;
	while (number != NULL)
	{
		vector[i] = atoi(number);
		i++;
		number = strtok(NULL, ",");	
	}	
}

void Sort::InsertSort(bool ascendent)
{
	int i, key, j;
	for (i = 1; i < NrElements; i++)
	{
		key = vector[i];
		j = i - 1;
		/* Move elements of arr[0..i-1], that are
		greater than key, to one position ahead
		of their current position */
		while (j >= 0 && vector[j] > key)
		{
			vector[j + 1] = vector[j];
			j = j - 1;
		}
		vector[j + 1] = key;
	}
}

void Sort::BubbleSort(bool ascendent)
{
	int i, j ,aux;
	for (i = 0; i < NrElements - 1; i++)

		// Last i elements are already in place
		for (j = 0; j < NrElements - i - 1; j++)
			if (vector[j] > vector[j + 1])
			{
				aux = vector[j];
				vector[j] = vector[j + 1];
				vector[j + 1] = aux;
			}
}

void Sort::Print()
{
	for (int i = 0;i < NrElements;i++)
		std::cout << vector[i] << " ";
	cout << endl;
}
int Sort::GetElementsCount()
{
	return this->NrElements;
}
void swap(int* a, int* b)
{
	int t = *a;
	*a = *b;
	*b = t;
}
int partition(int arr[], int low, int high)
{
	int pivot = arr[high]; // pivot
	int i = (low - 1); // Index of smaller element and indicates the right position of pivot found so far

	for (int j = low; j <= high - 1; j++)
	{
		// If current element is smaller than the pivot
		if (arr[j] < pivot)
		{
			i++; // increment index of smaller element
			swap(&arr[i], &arr[j]);
		}
	}
	swap(&arr[i + 1], &arr[high]);
	return (i + 1);
}
void quickSort(int arr[], int low, int high)
{
	if (low < high)
	{
		/* pi is partitioning index, arr[p] is now
		at right place */
		int pi = partition(arr, low, high);

		// Separately sort elements before
		// partition and after partition
		quickSort(arr, low, pi - 1);
		quickSort(arr, pi + 1, high);
	}
}
void Sort::QuickSort(bool ascendent)
{
	quickSort(vector, 0, NrElements-1);
}