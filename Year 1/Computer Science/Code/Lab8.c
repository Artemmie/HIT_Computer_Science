#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

// EX 1
void Ex1();
int * BuildArray(int);
void PrintArray(int*, int);
//---------------------------
// EX 2
void Ex2();
int * FibArr(int);
//---------------------------
void main()
{
    //Ex1();
    Ex2();
}
void Ex1()
{
    int size = 10;
    int *arr = BuildArray(size);
    PrintArray(arr, size);
}
int * BuildArray(int size)
{
    int *arr = (int*)malloc(size * (sizeof(int)));
    for (int i = 0; i < size; i++)
        arr[i] = i + 1; //scanf(%d, arr[i]);
    return arr;
}
void PrintArray(int* arr, int size)
{
    for (int i = 0; i < size; i++)
        printf("{%d}", arr[i]);
}
void Ex2()
{
    int size = 9;
    int *arr = FibArr(size);
    PrintArray(arr, size);
}
int * FibArr(int size)
{

    int *arr = (int*)malloc((size + 1) * (sizeof(int)));
    for (int i = 0; i < size + 1; i++)
    {
        if (i == 0) arr[i] = 0;
        else if (i == 1) arr[i] = 1;
        else arr[i] = arr[i - 2] + arr[i - 1];
    }
    return arr;
}