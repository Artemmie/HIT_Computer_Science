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
int * Lucas(int size);
{
    int *arr = (int*)malloc((size + 1) * sizeof(int));
    for (int i = 0; i <= size; i++)
    {
        if (i == 0) arr[i] = 2;
        else if (i == 1) arr[i] = 1;
        else arr[i] = arr[i - 1] + arr[i - 2];
    }
    return arr;
}