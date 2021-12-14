#define _CRT_SECURE_NO_WARNINGS
#define SIZE 5
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
// EX 3
void Ex3();
int  Popularity(int*, int,  int*);
//---------------------------
void main()
{
    //Ex1();
    //Ex2();
    Ex3();
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
int * FibArr(int size)
{

    int *arr = (int*)malloc((size + 1) * (sizeof(int)));
    for (int i = 0; i <= size; i++)
    {
        if (i == 0) arr[i] = 0;
        else if (i == 1) arr[i] = 1;
        else arr[i] = arr[i - 2] + arr[i - 1];
    }
    return arr;
}
void Ex3()
{
    int arr[SIZE] = {1,6, 3, 3, 6};
    int count = 0;
    int result = Popularity(arr, SIZE, &count)
    printf("Result: %d | Count: %d", result, count);
}
int result(int *arr, int n, int *count)
{
    int *resultarr = calloc(size, sizeof(int));
    for (int i = 0; i < n; i++)
    {
        resultarr[arr[i]]++
    }
}