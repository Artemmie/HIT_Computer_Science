#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
//COMMON
void PrintArray(int*, int);
//---------------------------
// EX 1
void Ex1();
int * Lucas(int);
//---------------------------
// EX 2
void Ex2();
int * ArrayChange(int*, int, int, int*);
//---------------------------
int main()
{
    Ex1();
    return 0;
}
void Ex1()
{
    int size = 9;
    int *arr = Lucas(size);
}
int * Lucas(int size)
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
void PrintArray(int *arr, int n)
{
    for (int i = 0; i < n; i++) printf("{%d}", arr[i]);
}
void Ex2()
{
    int arr[5] = {1,8,3,6,11};
    int flag = 1, int size = 0;
    int *newArr = ArrayChange(arr, 5, flag, &size);
    PrintArray(newArr, size);
}
int * ArrayChange(int *arr, int n, int isEven, int *size)
{
    int *newArr;
    for (int i = 0; i < n; i++)
    {
        *size = *size + 1;
        if (*size == 1) *newArr = (int*)malloc(*size * sizeof(int));
        else *newArr = realloc(size, sizeof(int))
        if(isEven == 0)
    }
}