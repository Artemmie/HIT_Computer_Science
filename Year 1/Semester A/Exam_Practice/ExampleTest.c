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
    if (c[i] + c[j] == x) return 1;
    if (c[i] + c[j] > x) recFunc(c, x, i, j - 1);
    else if (c[i] + c[j] < x) recFunc(c, x, i + 1, j);
}


//Q3
/*
int strArr(char *g)
{
    int arr = (int)calloc(26, sizeof(int));
    int size = strlen(g);
    int flag = 0;
    for (int i = 0; i < size; i++)
        arr[g[i] - 'A']++;
    for (int i = 0; i < 26; i++)
    {
        if(arr[i] > 1) return 0;
        if(flag == 0 && arr[i] == 0) continue;
        if(arr[i] == 1 && flag == 0)
        {
            flag = 1;
            continue;
        }
        else if (arr[i] == 1 && flag == 1)
            if (arr[i - 1] == 0) return 0;   
    }
    free(arr);
    return 1;
}
*/

//Q4
int matFunc(int mat[][N])
{
    int result = 0;
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++)
        {
            if (i == j) continue;
            result += mat[j][i];
        }
        if (result != mat[i][i]) return 0;
        result = 0;
    }
    return 1;
}

void Q1()
{
    int n = 7;
    minmin(n);
}
void Q2()
{
    int x = -2;
    int i = 0;
    int j = 1;
    int arr[] = {-5,0};
    int result = recFunc(arr, x, i, j);
    printf("%d", result);
}
void Q3()
{
    char str[] = "ZYX";
    int result = strArr(str);
    printf("%d", result);
}
void Q4()
{
    int mat[N][N] = {{10,2,7,1},{2,7,-15,4},{9,1,-1,4},{-1,4,7,9}};
    int result = matFunc(mat);
    printf("%d", result);
}
int main()
{
    Q1();
    //Q2();
    //Q3();
    //Q4();
    return -1;
}