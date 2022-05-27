// Course: Advanced C programming
// exercise 2, question 4
// file name: ex2_q4.c

// --------------------------- //
// DO NOT CHANGE anything in the following macro:
#ifdef FUNC_DECLARE
#include "ex2_q4.h"
#else
// --------------------------------------- //
// Include and definition package section:
// --------------------------------------- //
#define FUNC_DECLARE
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#define scanf_s scanf
#define SIZE(a) (sizeof(a) / sizeof((a)[0]))
// --------------------------------------- //
// Types declration section:
// --------------------------------------- //
typedef struct list
{
    int data;
    struct list* next;
} list;
// --------------------------------------- //
// Functions declration section:
// --------------------------------------- //
unsigned long student_id();
list* createElement(int data, list* next);
list* createListFromArray(int* arr, int n);
void printList(list* lst);
void partition(list** lst, list** pivot, list** small, list** big);
void quickSortList(list** lst);
void freeList(list** lst);
// --------------------------------------- //
// Main section:
// --------------------------------------- //
int main()
{
    unsigned long id_num;
    int n;
    list* lst = NULL;
    int arr[] = { 5, 3, 7, 1, 9, 8, 2, 5, 6 };

    // call functions:
    id_num = student_id();
    printf("[id: %lu] start main\n", id_num);
    lst = createListFromArray(arr, SIZE(arr));
    quickSortList(&lst);

    // write output:
    printf("Output:\n");
    printList(lst);

    // free list:
    freeList(&lst);

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


///// <summary>
///// The function receives a value from type int,
//// and the pointer to the next element in list
///// and returns a dynamic element from type list
///// </summary>
///// <param>int data - value from type int, the value of the element</param>
///// <param>list* next - pointer to the next value after the newly created element</param>
///// <returns>dynamic value from type list</returns>
list* createElement(int data, list* next)
{
    list* item = (list*)(malloc(sizeof(list)));
    item->data = data;
    item->next = next;
    return item;
}
// --------------------------- //

/// <summary>
/// The function receives an integer array and its size
/// and returns a newly created list
/// </summary>
/// <param>int* arr - The array</param>
/// <param>int n - Amount of elements in array</param>
/// <returns>newly created list</returns>
list* createListFromArray(int* arr, int n)
{
    int i;
    list* head = NULL;
    for (i = n - 1; i >= 0; i--)
        head = createElement(arr[i], head);
    return head;
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
    list *tmp = lst;
    while (tmp)
    {
        printf("%d", tmp->data);
        tmp = tmp->next;
    }
    printf("\n");
}
// --------------------------- //


/// <summary>
/// The function receives a pointer to the head of the list
/// set first element to be the pivot and split all elements in lst to small and big accordingly
/// </summary>
/// <param>list** lst - Pointer to the pointer of the head of the list</param>
/// <param>list** pivot - Pointer to the pointer of the new pivot</param>
/// <param>list** small - Pointer to the pointer of the head of the small elements</param>
/// <param>list** big - Pointer to the pointer of the head of the big elements</param>
/// <returns>None</returns>
void partition(list** lst, list** pivot, list** small, list** big)
{
    // your code:
    (*pivot) = (*lst);
    list *tmp = (*pivot)->next;
    list *smallTail = (*big);
    list *bigTail = (*small);
    while (tmp)
    {
        if (tmp->data <= (*pivot)->data)
        {
            if ((*small) == NULL)
            {
                (*small) = tmp;
                smallTail = tmp;
            }
            else
            {
                smallTail->next = tmp;
                smallTail = tmp;
            }
        }
        else
        {
            if ((*big) == NULL)
            {
                ((*big) = tmp);
                bigTail = tmp;
            }
            else
            {
                bigTail->next = tmp;
                bigTail = tmp;
            }
        }
        tmp = tmp->next;
    }
    if ((*small) == NULL)
    {
        (*small) = tmp;
        smallTail = tmp;
    }
    if ((*small) != NULL) smallTail->next = NULL;
    if ((*big) == NULL)
    {
        (*big) = tmp;
        bigTail = tmp;
    }
    if ((*big) != NULL) bigTail->next = NULL;
    (*pivot)->next = NULL;
    (*lst) = NULL;
}
// --------------------------- //


/// <summary>
/// The function receives a pointer to the head of the list
/// and sort all elements by the quickSort method.
/// It is advisable to go over the standard implementation of quicksort on an array
/// </summary>
/// <param>list* curr - Pointer to an element inside the list</param>
/// <returns>None</returns>
void quickSortList(list** lst)
{
    // your code:
    if ((*lst) == NULL) return;
    list *small= NULL;
    list *big = NULL;
    list *pivot = NULL;
    list *tmp;
    partition(lst, &pivot, &small, &big);
    quickSortList(&small);
    if ((*lst) == NULL) (*lst) = pivot;
    else
    {
        tmp = (*lst);
        while (tmp) tmp = tmp->next;
        tmp = pivot;
    }
    quickSortList(&big);
    pivot->next = big;
}

// --------------------------- //


/// <summary>
/// The function free all allocated memory of a list.
/// </summary>
/// <param>list** lst - Pointer to the pointer of the head of the list</param>
/// <returns>None</returns>
void freeList(list** lst)
{
    // your code:
    list *tmp = (*lst);
    while ((*lst))
    {
        tmp = (*lst)->next;
        free((*lst));
        (*lst) = tmp;
    }
}
// --------------------------- //
