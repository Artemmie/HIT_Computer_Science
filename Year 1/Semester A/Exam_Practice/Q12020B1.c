#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int sum_inc_min_dec(int a[], int n)
{
    if (n == 1) return a[0];
    int result = sum_inc_min_dec(a + 1, n - 1);
    return result < a[0] ? result + a[0] : result - a[0];
}

void main()
{
    int arr[8] = {1,4,5,6,8,4,2,1};
    printf("%d", sum_inc_min_dec(arr, 8));
}