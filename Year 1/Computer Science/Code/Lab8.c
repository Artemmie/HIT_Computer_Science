#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

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
    int size = 10;
    int *arr = FibArr(size);
    PrintArray(arr, size);
}

int 
int * FibArr(int size)
{

    int *arr = (int*)malloc(size * (sizeof(int)));
    for (int i = 0; i < size; i++)
    {
        if (i == 0) arr[0] = 0
    }
}