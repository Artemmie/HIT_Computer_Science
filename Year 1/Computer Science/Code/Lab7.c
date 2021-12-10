#define _CRT_SECURE_NO_WARNINGS
#define SIZE 5
#include <stdio.h>
#include <stdlib.h>
// EX 1
void Ex1();
void InputArray(int*, int);
void PrintArray(int*, int);
//---------------------------
// EX 2
void Ex2();
void arrCacl(int*, int, int*, int*, int*, double, int*);
//---------------------------

int main()
{
	//Ex1();
	Ex2();
}

void Ex1()
{
	int arr[SIZE];
	InputArray(arr, SIZE);
}
void InputArray(int* arr, int n)
{
	for (int i = 0; i < n; i++)
	{
		printf("Enter %d's values:", i);
		arr[i] = rand();
	}
	PrintArray(arr, n);
}
void PrintArray(int* arr, int n)
{
	for (int i = 0; i < n; i++)
		printf("%d\n", arr[i]);
}
void Ex2()
{
	int arr[SIZE];
	InputArray(arr, SIZE);
}
