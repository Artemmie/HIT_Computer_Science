// Course: Advanced C programming
// exercise 2, question 2
// file name: ex2_q2.c

// --------------------------- //
// DO NOT CHANGE anything in the following macro:
#ifdef FUNC_DECLARE
#include "ex2_q2.h"
#else
// --------------------------------------- //
// Include and definition package section:
// --------------------------------------- //
#define FUNC_DECLARE
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#define scanf_s scanf
#define ROWS 4
#define COLS 5
// --------------------------------------- //
// Types declration section:
// --------------------------------------- //
typedef struct four
{
	int i, j, d, value;
} four;

typedef struct list
{
	four data;
	struct list* next;
} list;
// --------------------------------------- //
// Functions declration section:
// --------------------------------------- //
unsigned long student_id();
int createArrayAndList(int A[][COLS], list **lst, four **arr, int rows, int cols);
four createFour(int i, int j, int d, int value);
list* createElement(four data);
void printArray(four* arr, int n);
void printList(list* lst);
void freeDynamic(list** lst, four **arr);

// --------------------------------------- //
// Main section:
// --------------------------------------- //
int main()
{
	unsigned long id_num;
	int n;
	list* lst = NULL;
	four* arr = NULL;
	int A[ROWS][COLS] = {
		{0, 6, 5, 6, 6},
		{8, 9, 5, 6, 7},
		{7, 6, 5, 4, 7},
		{9, 8, 1, 6, 7},
	};

	// call functions:
	id_num = student_id();
	printf("[id: %lu] start main\n", id_num);

	n = createArrayAndList(A, &lst, &arr, ROWS, COLS);

	// write output:
	printf("Output:\n");
	printArray(arr, n);
	printList(lst);

	// free dynamic:
	freeDynamic(&lst, &arr);

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

}
// --------------------------- //


/// <summary>
/// This function allocate a dynamic array and list, 
/// from elements found at matrix A 
/// </summary>
/// <param>int A[][] - The static matrix</param>
/// <param>list** lst - Pointer to the pointer of the head of the list</param>
/// <param>four** arr - Pointer to the pointer of the head of the array</param>
/// <param>int rows - The number of rows in the matrix</param>
/// <param>int cols - The number of colums in the matrix</param>
/// <returns>Number of requested elements in found in A</returns>
int createArrayAndList(int A[][COLS], list** lst, four** arr, int rows, int cols)
{
	// your code:
}
// --------------------------- //

/// <summary>
/// The function receives 4 integer values 
/// and returns a value from type four.
/// </summary>
/// <param>int i - The cell row number in matrix</param>
/// <param>int j - The cell colum number in the matrix</param>
/// <param>int d - The difference between the consecutive values</param>
/// <param>int value - The value at position [i,j] in matrix</param>
/// <returns>value from type four</returns>
four createFour(int i, int j, int d, int value)
{
	// your code:
}
// --------------------------- //

/// <summary>
/// The function receives a value from type four
/// and returns a dynamic element from type list  
/// </summary>
/// <param>four data - value from type four</param>
/// <returns>dynamic value from type list</returns>
list* createElement(four data)
{
	// your code:
}
// --------------------------- //


/// <summary>
/// The function receives an array from type four,
/// and print its values.  
/// </summary>
/// <param>four* arr - the array</param>
/// <param>int n - number of elements</param>
/// <returns>None</returns>
void printArray(four* arr, int n)
{
	// your code:
}
// --------------------------- //


/// <summary>
/// The function receives a list,
/// and print its values.  
/// </summary>
/// <param>list* lst - the list</param>
/// <returns>None</returns>
void printList(list* lst)
{
	// your code:
}
// --------------------------- //

/// <summary>
/// The function free all allocated memory of the program. 
/// </summary>
/// <param>list** lst - Pointer to the pointer of the head of the list</param>
/// <param>four** arr - Pointer to the pointer of the head of the array</param>
/// <returns>None</returns>
void freeDynamic(list** lst, four** arr)
{
	// your code:
}
// --------------------------- //
