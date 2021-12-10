#define _CRT_SECURE_NO_WARNINGS
#define SIZE 5
#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
// EX 1
void Ex1();
void InputArray(int*, int);
void PrintArray(int*, int);
//---------------------------
// EX 2
void Ex2();
void arrCalc(int*, int, int*, int*, int*, double*, int*);
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
 srand(time(NULL));
	for (int i = 0; i < n; i++)
	{
		arr[i] = rand() % 100;
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
 arrCalc(arr, SIZE,NULL,NULL,NULL,NULL,NULL)
;
}
void arrCalc(int *arr, int n, int *max , int *min, int *sum, double *avg, int *isEven)
{
    min = INT_MAX;
    max = INT_MIN;
    for (int i = 0; i < n; i++)
    {
        if (min > arr[i]) min = arr[i];
        if (max < arr[i]) max = arr[i];
        if (arr[i] % 2 == 0) isEven = 1;
        sum += arr[i];  
    }
    avg = (*double)sum / n;
    printf("Min: %d | Max: %d | Sum: %d | Avg: %d\n", min, max, sum, avg);
}