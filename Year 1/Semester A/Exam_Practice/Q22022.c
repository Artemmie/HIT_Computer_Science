#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

void main()
{
    int n = 0;
    //printf("%d", recNum(n));
    char str[] = "I Love Israel";
    deleteSpaces(str);
    puts(str);
}

int recNum(int n)
{
    if (n / 10 == 0) return 9 - n;
    int test = recNum(n / 10) * 10 + (9 - n  % 10);
}

void deleteSpaces(char* str)
{
    int size = strlen(str);
    for (int i = 0; i < size; i++)
    {
        if (str[i] == ' ')
        {
            for (int j = i; j < size; j++)
            {
                str[j] = str[j + 1];
            }
            size--;
        }
    }
}

