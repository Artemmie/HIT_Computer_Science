#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <limits.h>
void Ex1()
{
    int num;
    printf("Insert the number: ");
    scanf("%d", &num);
    for (int i = 1; i <= num; i++)
    {
        if (i % 15 == 0) printf("FizzBuzz\n");
        else if (i % 3 == 0) printf("Fizz\n");
        else if (i % 5 == 0) printf("Buzz\n");
        else printf("%d\n", i);
    }
}
void Ex2()
{
    int num;
    printf("Insert the number: ");
    scanf("%d", &num);
    for (int i = 1; i <= 40; i++)
    {
        if (i  * 25 > num) 
        {
            printf("Number %d is located in area #%d\n", num, i);
            break;
        }
    }
    
}
void Ex3()
{
    int num, nis20 = 0, nis10 = 0, nis5 = 0, nis2 = 0, nis1 = 0;
    printf("Insert the number: ");
    scanf("%d", &num);
    while (num > 0)
    {
        if (num > 20) 
        {
            num -= 20;
            nis20++;
        }
        else if(num > 10)
        {
            num -= 10;
            nis10++;
        }
        else if (num > 5)
        {
            num -= 5;
            nis5++;
        }
        else if (num > 2)
        {
            num -= 2;
            nis2++;
        }
        else
        {
            num -=1;
            nis1++;
        }
    }
    printf("20 NIS: %d\n10 NIS: %d\n5 NIS: %d\n2 NIS: %d\n1 NIS: %d\n",nis20, nis10, nis5,nis2, nis1);
}
void Ex4()
{
    int num, tmp, sum = 0;
    printf("Insert the number: ");
    scanf("%d", &num);

    for (int i = 1; i <= num; i++)
    {
        printf("Insert the number #%d: ", i);
        scanf("%d", &tmp);
        if (tmp % 2 != 0 && tmp % 3 != 0) sum += tmp;
    }
    printf("Sum of numbers is: %d", sum);
}
void Ex5()
{
    int num, division = 0, divider = 1;
    printf("Insert the number: ");
    scanf("%d", &num);

    for (int i  = 1; i <= num; i++)
    {
        divider *= i;
        division += i; 
    }
    printf("Result is: %d", divider / division);
}
void Ex6()
{
    int num, index = 0, min = INT_MAX, max = INT_MIN;
    printf("Insert the number: ");
    scanf("%d", &num);
    while (num != -1)
    {
        if (min > num) min = num;
        if (max < num) max = num;
        index++;
        printf("Insert the number: ");
        scanf("%d", &num);
    }
    if (index == 0) printf("0 numbers, no max nor min!");
    else printf("%d numbers, min: %d | max: %d", index, min, max);
}
void Ex7()
{
    int num, binaryNum = 0, tmp = 0;
    printf("Insert the number: ");
    scanf("%d", &num);
    while (num > 0)
    {
        tmp *= 10;
        if (num  % 2 == 0) tmp += 0;
        else tmp += 1;
        num /= 2;
    }
    printf("%d", tmp);
}
int main()
{
    //Ex1();
    //Ex2();
    //Ex3();
    //Ex4();
    //Ex5();
    //Ex6();
    Ex7();
}