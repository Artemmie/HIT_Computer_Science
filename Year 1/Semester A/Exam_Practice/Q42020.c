#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <time.h>

#define N 4

void sort_arr(int* a, int n);
void merge_sort(int* a, int first, int last);
void sort_Mat(int a[][N]);
void printMat(int a[][N]);

int main()
{
	// Question no.4
	int mat4[N][N] = { {2,14,16,8},{2,-7,17,7},{-1,-4,-7,-9},{0,15,3,20} };
	sort_Mat(mat4);
	printMat(mat4);

	return 0;
}
void sort_Mat(int a[][N])
{
	merge_sort(a, 0, N * N - 1);
}

void merge(int* a, int p, int q, int r)
{
	int i = p, j = q + 1, k = 0;
	int* temp = (int*)calloc(r - p + 1, sizeof(int));
	while ((i <= q) && (j <= r))
		if (a[i] < a[j])
			temp[k++] = a[i++];
		else
			temp[k++] = a[j++];
	while (j <= r) // if( i>q )
		temp[k++] = a[j++];
	while (i <= q) // j>r
		temp[k++] = a[i++];
	for (i = p, k = 0; i <= r; i++, k++) // copy temp[] to a[]
		a[i] = temp[k];
	free(temp);
}

void merge_sort(int* a, int first, int last)
{
	int middle;
	if (first < last)
	{
		middle = (first + last) / 2;
		merge_sort(a, first, middle);
		merge_sort(a, middle + 1, last);
		merge(a, first, middle, last);
	}
}

void printMat(int a[][N])
{
	int i, j;
	for (i = 0;i < N;i++)
	{
		for (j = 0;j < N;j++)
			printf("%4d", a[i][j]);
		printf("\n");
	}
}