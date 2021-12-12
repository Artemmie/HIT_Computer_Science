#define _CRT_SECURE_NO_WARNINGS
#define SIZE 5
#include <stdio.h>
#include <limits.h>

// EX 1
void Ex1();
void SortPointers(int*, int*, int*);
//---------------------------

void main()
{
    Ex1();
}
void Ex1()
{
    int num1 = 6, num2 = 9, num3 = 1;
    SortPointers(&num1, &num2, &num3);
}
SortPointers(int* num1ptr, int* num2ptr, int* num3ptr)
{
    
}