#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
// EX 1
void Ex1();
int * Lucas(int);
//---------------------------
int main()
{
    Ex1();
    return 0;
}
void Ex1()
{
    int size = 9;
    int arr[] = Lucas(size);
}
int * Lucas(int n)