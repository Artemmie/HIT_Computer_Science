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

void main()
{
    //Ex1();
    Ex2();
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
    result /= (double)*counter));
}