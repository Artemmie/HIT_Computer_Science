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
int IntPow(int, int);
//---------------------------
// EX 4
void Ex4();
int BiggestCombination(int*, int);
//---------------------------
// EX 5
void Ex5();
int KeyCheck(int*, int*, int*, int, int);
//---------------------------
// EX 6
void Ex6();
void maxmax(int*, int, int*, int*, int*, int*);
//---------------------------
// EX 7
void Ex7();
int Polydrom(int*, int);
int PolydromRec(int*, int);
//---------------------------
// EX 8
void Ex8();
int PrintArr(int*, int);
int ReversePrint(int*, int);
//---------------------------
// EX 9
void Ex9();
double AverageRec(int*, int);
//---------------------------
// EX 10
void Ex10();
int DoubleSort(double*, int);
//---------------------------
// EX 11
void Ex11();
int Super(int*, int);
int SuperRec(int*, int);
//---------------------------
void main() {
    //Ex1();
    //Ex2();
    //Ex3();
    //Ex4();
    //Ex5();
    //Ex6();
    //Ex7();
    //Ex8();
    //Ex9();
    //Ex10();
    Ex11();

}
void Ex1() {
    int num1 = 6,
    num2 = 9,
    num3 = 1;
    SortPointers(&num1, &num2, &num3);
    printf("N1: %d, N2: %d, N3: %d", num1, num2, num3);
}
void SortPointers(int* num1ptr, int* num2ptr, int* num3ptr) {
    int tmp = *num1ptr;
    if (*num1ptr <= *num2ptr) {
        *num1ptr = *num2ptr;
        *num2ptr = tmp;
    }
    if (*num1ptr <= *num3ptr) {
        tmp = *num1ptr;
        *num1ptr = *num3ptr;
        *num3ptr = *num1ptr;
    }
    if (num3ptr > num2ptr) {
        tmp = *num3ptr;
        *num3ptr = *num2ptr;
        *num2ptr = tmp;
    }
}
void Ex2() {
    int num = -154;
    int digit = 7;
    int counter = 0;
    double result = AverageAboveDig(num, digit, &counter);
    printf("Average: %.2f | counter: %d", result, counter);
}
double AverageAboveDig(int num, int digit, int *counter) {
    double result = 0.0;
    while (num != 0) {
        if (num % 10 < digit) {
            *counter += 1;
            result += (double)(num % 10);
        }
        num /= 10;
    }
    return fabs(result / (double)*counter);
}
void Ex3() {
    int c = 4,
    x = 2,
    n = 3;
    int result = Infi(x, &c, &n);
    printf("Result: %d | n: %d | c: %d,", result, n, c);
}
int Infi(int x, int *c, int *n) {
    *c *= *n;
    *n -= 1;
    return *c * (IntPow(x, *n));
}
int IntPow(int x, int y) {
    int index = x;
    for (int i = 1; i < y; i++) x *= index;
    return x;
}
void Ex4() {
    int arr[SIZE] = {
        3,
        8,
        10,
        -7,
        7
    };
    printf("Result: %d", BiggestCombination(arr, SIZE));
}
int BiggestCombination(int *arr, int n) {
    int sum = arr[0] + arr[1];
    for (int i = 1; i < n-1; i++)
    if (sum < arr[i] + arr[i + 1]) sum = arr[i] + arr[i + 1];
    return sum;
}
void Ex5() {
    int arr[SIZE] = {
        1,
        6,
        2,
        4,
        3
    };
    int ptr1 = -1,
    ptr2 = -1,
    key = 4;
    printf("Result: %d | ", KeyCheck(arr, &ptr1, &ptr2, SIZE, key));
    printf("1st value: %d | 2nd value: %d", ptr1, ptr2);
}
int KeyCheck(int *arr, int *ptr1, int *ptr2, int n, int key) {
    for (int i = 0; i < n; i ++) {
        for (int j = i + 1; j < n; j ++) {
            if (arr[i] + arr[j] < key) {
                *ptr1 = arr[i];
                *ptr2 = arr[j];
                return 1;
            }
        }
    }
    return 0;
}
void Ex6() {
    int arr[8] = {
        3,
        6,
        5,
        9,
        5,
        7,
        2,
        1
    };
    int max_even = 0,
    even = 0,
    max_odd = 0,
    odd = 0;
    maxmax(arr, 8, &max_even, &even, &max_odd, &odd);
    printf("Max Even: %d Max Odd: %d Even: %d | Odd: %d", max_even, max_odd, even, odd);
}
void maxmax(int *arr,int n,int *max_even,int *even,int *max_odd,int *odd)
{
    for (int i = 0; i < n; i++)
    {
        if (arr[i] % 2 == 0)
        {
            *even = 1;
            if (*max_even < arr[i]) *max_even = arr[i];
        }
        else
        {
            *odd = 1;
            if(*max_odd < arr[i]) *max_odd = arr[i];
        }
    }
}
void Ex7()
{
    int arr[SIZE] = {
        1,
        3,
        2,
        3,
        1
    };
    printf("Result: %d\n", Polydrom(arr, SIZE));
    printf("Result Recursion: %d\n", PolydromRec(arr, SIZE));
}
int Polydrom(int *arr, int n)
{
    for (int i = 0; i < n/2; i++)
        if (arr[i] != arr[n-i-1]) return 0;
    return 1;
}
int PolydromRec(int *arr, int n)
{
    if (n < 1) return 1;
    if (arr[0] != arr[n-1]) return 0;
    PolydromRec(arr + 1, n-2);
}
void Ex8()
{
   int arr[SIZE] = {
        1,
        2,
        3,
        4,
        5
    };
    PrintArr(arr, SIZE);
    printf("\n");
    ReversePrint(arr, SIZE);
}
int PrintArr(int *arr, int n)
{
    if (n == 0) return;
    printf("{%d}", arr[0]);
    PrintArr(arr + 1, n - 1);
}
int ReversePrint(int *arr, int n)
{
    if (n == 0) return;
    printf("{%d}", arr[n-1]);
    ReversePrint(arr, n - 1);
}
void Ex9()
{
       int arr[SIZE] = {
        1,
        2,
        3,
        4,
        5
    };
    printf("Answer is: %.2f",AverageRec(arr, SIZE));
}
double AverageRec(int *arr, int n)
{
    if (n == 1) return arr[n-1];
    return (double)(AverageRec(arr, n - 1) * (n - 1) + arr[n - 1]) / n;
}
void Ex10()
{
        double arr[4] = {
        1.7,
        2.65,
        3.5,
        4.7
    };
    printf("Answer is: %d", DoubleSort(arr, 4));
}
int DoubleSort(double *arr, int n)
{
    if (n == 1) return 1;
    if (arr[0] > arr[1]) return 0;
    int num1 = ((int)(arr[0] * 100) % 100);
    int num2 = ((int)(arr[1] * 100) % 100);
    if (num1 < num2) return 0;
    DoubleSort(arr + 1, n - 1 );
}
void Ex11()
{
        int arr[6] = {
        1,
        2,
        5,
        7,
        20,
        40
    };
    printf("Answer is: %d\n",Super(arr, SIZE));
    printf("Answer is: %d\n",SuperRec(arr, SIZE));
}
int Super(int *arr, int n)
{
    int sum = 0;
    for(int i = 0; i < n; i++)
    {
        if (arr[i] < sum) return 0;
        sum += arr[i];
    }
    return 1;
}
int SuperRec(int* arr, int n)
{
    if (n == 1) return 1;
    SuperRec(arr, n - 1);
    if(arr[0] > arr[n-1]) return 0;
    arr[0] += arr[n-1];
}