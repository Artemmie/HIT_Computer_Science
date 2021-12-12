#define _CRT_SECURE_NO_WARNINGS
#define SIZE 5
#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
// EX 1
void Ex1();
void InputArray(int*, int);
void PrintArray(int*, int);
//---------------------------
// EX 2
void Ex2();
void arrCalc(int*, int, int*, int*, int*, double*, int*);
//---------------------------
// EX 3
void Ex3();
int SortedArr(int*, int, int*);
int SortedArrRecursion(int*, int, int*);
//---------------------------
int main() {
    //Ex1();
    Ex2();
    //Ex3();
}

void Ex1() {
    int arr[SIZE];
    InputArray(arr, SIZE);
}
void InputArray(int* arr, int n) {
    srand(time_t(NULL));
    for (int i = 0; i < n; i++) {
        arr[i] = rand() % 100;
    }
    PrintArray(arr, n);
}
void PrintArray(int* arr, int n) {
    for (int i = 0; i < n; i++)
    printf("%d\n", arr[i]);
}
void Ex2() {
    int isEven;
    int max = INT_MIN;
    int min = INT_MAX;
    int sum = 0;
    double avg = 0.0;
    int arr[SIZE];
    InputArray(arr, SIZE);
    arrCalc(arr, SIZE, &max, &min, &sum, &avg, &isEven);
    printf("Min: %d | Max: %d | Sum: %d | Avg: %0.2f | isEven: %d\n", min, max, sum, avg, isEven);
}
void arrCalc(int *arr, int n, int *max, int *min, int *sum, double *avg, int *isEven) {
    for (int i = 0; i < n; i++) {
        if (*min > arr[i]) *min = arr[i];
        if (*max < arr[i]) *max = arr[i];
        if (arr[i] % 2 == 0) *isEven = 1;
        *sum += arr[i];
    }
    *avg = ((double)*sum / (double)n);

}
void Ex3() {
    int flag = 2;
    int arr[SIZE] = {
        1,
        3,
        2,
        5,
        11
    };
    //InputArray(arr, SIZE);
    int result = SortedArr(arr, SIZE, &flag);
    printf("Sorted: %d | Very Sorted: %d", result, flag);
    flag = -1;
    result = SortedArrRecursion(arr, SIZE, &flag);
    printf("Sorted: %d | Very Sorted: %d", result, flag);
}
int SortedArr(int* arr, int n, int *flag) {
    for (int i = 0; i < n - 1; i++) {
        if (arr[i] > arr[i + 1]) {
            *flag = 0;
            return 0;
        }
        else if (arr[i] == arr[i + 1]) *flag = 0;
    }
    if (*flag != 0) *flag = 1;
    return 1;
}
int SortedArrRecursion(int *arr, int num, int *flag) {
    if (num == 0) return arr[0];
    if (SortedArrRecursion(arr, num - 1, &flag) > arr[num - 1]){
        *flag = 0;
        return 0;
    return 1;
    }
}