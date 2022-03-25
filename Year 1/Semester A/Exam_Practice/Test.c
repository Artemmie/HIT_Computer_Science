#define _CRT_SECURE_NO_WARNINGS
#define N 4
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

//Q1
void minmin(int n)
{
    int value;
    int tmp;
    int result = 0;
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &value);
        if (i == 0) 
        {
            tmp = value;
            continue;
        }
        else if (value < tmp) result = result * 10 + value;
        tmp = value;
    }
    tmp = 0;
    while (result != 0)
    {
        tmp = tmp * 10 + result % 10;
        result /= 10;
    }
    while (tmp != 0)
    {
        if (tmp / 10 != 0) printf("%d,", tmp % 10);
        else printf("%d", tmp % 10);
        tmp /= 10;
    }
}

//Q2
int recFunc(int *c, int x, int i, int j)
{
    if (i == j) return -1;
    if (c[i] + c[j] == x) return i;
    if (c[i] + c[j] > x) recFunc(c, x, i, j - 1);
    else if (c[i] + c[j] < x) recFunc(c, x, i + 1, j);
}

void Q1()
{
    int n = 7;
    minmin(n);
}
void Q2()
{
    int x = 23;
    int i = 0;
    int j = 4;
    int arr[] = {-5,-2, 12, 25, 34, 40};
    int result = recFunc(arr, x, i, j);
    printf("%d", result);
}
int main()
{
    //Q1();
    Q2();
    return -1;
}