#include <stdio.h>
#include <string.h>

int fib(char *str)
{
    int n1 = strToNum(str, 0, 1);
    int n2 = strToNum(str, 1, 1);
    int len = 0, i = 2, n3;
    while (str[i] != '\0')
    {
        len = numLength(n1 + n2);
        n3 = strToNum(str, i, len);
        if (n1 + n2 != n3) return 0;
        n1 = n2;
        n2 = n3;
        i += len;
    }
    return 1;
}
int strToNum(char *str, int index, int len)
{
    int num = 0;
    while (len != 0 && str[index] != '\0')
    {
        num = num * 10 + str[index++] - '0';
        len--;
    }
    return num;
}
int numLength(int num)
{
    int counter = 0;
    while (num > 0)
    {
        counter++;
        num /= 10;
    }
    return counter;
}
void main()
{
    char str[] = "191019294877125202";
    printf("%d", fib(str));
}