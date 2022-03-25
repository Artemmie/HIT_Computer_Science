#include <stdio.h>
void swaptest(int*, int*);
void sort_arr(int*, int);

void main()
{
    int arr3[] = { 1, 2, 0, 0, 1, 2, 2, 1, 0, 0, 1, 1, 2, 2, 0 };
	int size3 = sizeof(arr3) / sizeof(int);
	sort_arr(arr3, size3);
	printf("After sort the array is:\n");
	for (int i = 0; i < size3; i++) {
		printf("%d ", arr3[i]);
	}
	printf("\n");
}
void swaptest(int* a, int *b)
{
    int tmp;
    tmp = *a;
    *a = *b;
    *b = tmp;
}
void sort_arr(int a[], int n)
{
    int i = 0;
    for (i; i < n; i++) if (a[i] != 0) break;
    int start = i;
    for (i; i < n; i++) if (a[i] == 0) swaptest(&a[i], &a[start++]);
    for (i = start; i < n; i++) if (a[i] == 1) swaptest(&a[i], &a[start++]);
}