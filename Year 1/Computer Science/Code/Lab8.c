#define _CRT_SECURE_NO_WARNINGS
#define SIZE 6
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
// EX 4
void Ex4();
int  Symmetrical(int*, int, int);
//---------------------------
int main()
{
    //Ex1();
    //Ex2();
    Ex3();
    return 0;
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
    int arr[SIZE] = {1,6, 3, 3, 6, 6};
    int count = 0;
    int result = Popularity(arr, SIZE, &count);
    printf("Result: %d | Count: %d", result, count);
}
int Popularity(int *arr, int n, int *count)
{
    int *resultarr = calloc(10, sizeof(int));
    int index = 0;
    for (int i = 0; i < n; i++)
        resultarr[arr[i]]++;
    for (int i = 0; i < 10; i++)
    {
        if (resultarr[i] == 0) continue;
        if (resultarr[i] > *count)
        {
            index = i;
            *count = resultarr[i];
        }
    }
    return index;
}
void Ex4()
{
    int arr[SIZE] = {1,2, 3, 2, 3, 3};
    int k = 3;
    int result = Symmetrical(arr, SIZE, k);
    printf("Result: %d", result);
}
int Symmetrical(int *arr, int n, int k)
{
    int *resultarr = calloc(k, sizeof(int));
    for (int i = 0; i < n; i++)
        resultarr[arr[i]]++;
    for (int i = 0; i < k; i++)
        if (resultarr[i] != i + 1) return 0;
    return 1;
}