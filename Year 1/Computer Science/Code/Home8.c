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
// EX 3
void Ex3();
int * Vectors(int*, int*, int);
//---------------------------
int main()
{
     //Ex1();
    Ex2();
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
    int isEven = 1;
    int size = 0;
    int *newArr = ArrayChange(arr, 5, isEven, &size);
    PrintArray(newArr, size);
    printf("\nSize - %d", size);
}
int * ArrayChange(int *arr, int n, int isEven, int *size)
{
    int *newArr = (int*)malloc((*size) * sizeof(int));
    for (int i = 0; i < n; i++)
    {
        if(isEven == 1 && arr[i] % 2 == 0) 
        {
            newArr[*size] = arr[i];
            *size = *size + 1;
        }
        else if (isEven != 1 && arr[i] % 2 != 0) 
        {
            newArr[*size] = arr[i];
            *size = *size + 1;
        }
    }
    return newArr;
}
void Ex3()
{
    int arrA[3] = {1,2,1};
    int arrB[3] = {3,3,3};
    int *result = Vectors(arrA, arrB, 3);
    PrintArray(result, 3);
}
int * Vectors(int *arrA, int *arrB, int size)
{
    int *result = (int*)malloc(size * sizeof(int))
}