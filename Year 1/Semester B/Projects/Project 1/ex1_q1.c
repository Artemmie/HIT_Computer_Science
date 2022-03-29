// Course: Advanced C programming
// exercise 1, question 1
// file name: ex1_q1.c
#define _CRT_SECURE_NO_WARNINGS
// --------------------------- //
// include package section:
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
// --------------------------- //


// --------------------------- //
// function declaration and main section:
// DO NOT CHANGE anything in the following macro:
#ifdef FUNC_DECLARE
	#include "ex1_q1.h"
#else
	#define FUNC_DECLARE
	unsigned long student_id();
	int * scanArray(int *);
	void printArray(int *, int);
	int arrangeArray(int **, int);	
	
	int main()
	{
		unsigned long id_num;
		int *arr, n, k;
		
		// scan array:
		arr = scanArray(&n);
		
		// call functions:
		id_num = student_id();
		printf("[id: %lu] start main\n", id_num);
		
		k = arrangeArray(&arr, n);
		
		// write output:
		printf("Output:\n");
		printf("Size of k: %d\n", k);
		printf("Sorted array:\n");
		printArray(arr, n);
		free(arr);
		
		return 0;
	}
#endif
// --------------------------- //


// --------------------------- //
// function implementation section:
unsigned long student_id()
{
    // return your id number,
    // for example if your id is 595207432
    // return 595207432;
    // your code:
	return 326856432;
}
// --------------------------- //

// DO NOT CHANGE the following function:
int * scanArray(int *n)
{
	int i;
	int *arr;
	printf("Enter array size: ");
	scanf("%d", n);

	arr = (int*)malloc(sizeof(int) * (*n));
	for (i = 0; i < *n; ++i)
	{
		printf("Enter value #%d: ", i + 1);
		scanf("%d", arr+i);
	}
	
	return arr;
}
// --------------------------- //


// DO NOT CHANGE the following function:
void printArray(int *arr, int n)
{
	int i;
	printf("{");
	for (i = 0; i < n; ++i)
		printf("%d%s", arr[i], i == n - 1 ? "" : ", ");
	printf("}\n");
}
// --------------------------- //

/// <summary>
/// Combine the two groups using realloc and memcpy only. 
/// </summary>
/// <param>int **arr - Address of the array pointer</param>
///<param>int n - Size of the array</param>
/// <returns>Size of the first group</returns>
int arrangeArray(int **arr, int n)
{
	// your code:
	int result, rest;
	for (result = 1; result < n; result++)
		if ((*arr)[result - 1] > (*arr)[result]) break;
	rest = n - result;
	(*arr) = realloc(*arr, 2 * n * sizeof(int));
	memcpy((*arr) + n, (*arr), n * sizeof(int));
	memcpy((*arr), (*arr) + result, rest * sizeof(int));
	memcpy((*arr) + rest, (*arr) + n, result * sizeof(int));
	(*arr) = realloc(*arr, n * sizeof(int));
	return result;
}
// --------------------------- //