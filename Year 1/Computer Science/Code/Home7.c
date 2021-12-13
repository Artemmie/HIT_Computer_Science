#define _CRT_SECURE_NO_WARNINGS
#define SIZE 5
#include <stdio.h>
#include <limits.h>
#include <math.h>

// EX 1
void Ex1();
void SortPointers(int*, int*, int*);
//---------------------------
// EX 2
void Ex2();
double AverageAboveDig(int, int, int*);
//---------------------------
// EX 3
void Ex3();
int Infi(int, int*, int*);
int IntPow(int,int);
//---------------------------
// EX 4
void Ex4();
int BiggestCombination(int*, int);
//---------------------------
// EX 5
void Ex5();
int KeyCheck(int*, int*, int*, int, int);
//---------------------------
void main()
{
    //Ex1();
    //Ex2();
    //Ex3();
    //Ex4();
    Ex5();
}
void Ex1()
{
    int num1 = 6, num2 = 9, num3 = 1;
    SortPointers(&num1, &num2, &num3);
    printf("N1: %d, N2: %d, N3: %d", num1, num2, num3);
}
void SortPointers(int* num1ptr, int* num2ptr, int* num3ptr)
{
    int tmp = *num1ptr;
    if (*num1ptr <= *num2ptr)
    {
        *num1ptr = *num2ptr;
        *num2ptr = tmp;
    }
    if (*num1ptr <= *num3ptr)
    {
        tmp = *num1ptr;
        *num1ptr = *num3ptr;
        *num3ptr = *num1ptr;
    }
    if (num3ptr > num2ptr)
    {
        tmp = *num3ptr;
        *num3ptr = *num2ptr;
        *num2ptr = tmp;
    }
}
void Ex2()
{
    int num = -154;
    int digit = 7;
    int counter = 0;
    double result = AverageAboveDig(num, digit, &counter);
    printf("Average: %.2f | counter: %d", result, counter);
}
double AverageAboveDig(int num, int digit, int *counter)
{
    double result;
    while (num != 0)
    {
        if (num % 10 < digit)
        {
            *counter += 1;
            result += (double)(num % 10);
        }
        num /= 10;
    }
    return fabs(result / (double)*counter);
}
void Ex3()
{
    int c = 4,
    x = 2,
    n = 3;
    int result = Infi(x, &c, &n);
    printf("Result: %d | n: %d | c: %d,", result, n, c);
}
int Infi(int x, int *c, int *n)
{
    *c *= *n;
    *n -= 1;
     return *c * (IntPow(x,*n));
}
int IntPow(int x, int y)
{
    int index = x;
    for (int i = 1; i < y; i++) x *= index;
    return x;
}
void Ex4()
{
    int arr[SIZE] = {3,8,10,-7,7};
    printf("Result: %d", BiggestCombination(arr, SIZE));
}
int BiggestCombination(int *arr, int n)
{
    int sum = arr[0] + arr[1];
    for (int i = 1; i < n-1; i++)
        if (sum < arr[i] + arr[i + 1]) sum = arr[i] + arr[i + 1];
    return sum;
}
void Ex5()
{
    int arr[SIZE] = {1,6,2,4,3};
    int ptr1 = -1,
    ptr2 = -1,
    key = 4;
    printf("Result: %d | ", KeyCheck(arr, &ptr1, &ptr2, SIZE, key));
    printf
}
int KeyCheck(int *arr, int *ptr1, int *ptr2, int n, int key)
{
    for (int i = 0; i <n; i ++)
    {
        for (int j = 0; j < n; j ++)
        {
            if (i == j) continue;
            if (arr[i] + arr[j] < key)
            {
                *ptr1 = arr[i];
                *ptr2 = arr[j];
                return 1;
            }
        }
    }
    return 0;
}
