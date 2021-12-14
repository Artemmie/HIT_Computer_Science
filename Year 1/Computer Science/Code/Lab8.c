#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

// EX 1
void Ex1();
int * BuildArray(int);
//---------------------------
void main()
{
    Ex1();
}
void Ex1()
{
    int size = 10;
    int *arr = BuildArray(size);
}
int * BuildArray(int size)
{
    int *arr = (int*)malloc(size * (sizeof(int)));
    for (int i = 0; i < size; i++){
        arr[i] = i + 1;
    }
    return arr;
}