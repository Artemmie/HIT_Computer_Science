#include <time.h>
#include <stdio.h>
#define SIZE 5
void Ex_2(int*, int);
int main()
{
    int A[SIZE] = {1, 2, 3, 4, 5};
    clock_t tic = clock();
    Ex_2(A, SIZE);
    clock_t toc = clock();
    printf("Elapsed: %f seconds\n", (double)(toc - tic) / CLOCKS_PER_SEC);
    return 0;
}


void Ex_2(int *A, int n)
{
    int i;
    for (i = 0; i < n; i+=2)
        printf("%d", A[i]);
    printf("\n");
}