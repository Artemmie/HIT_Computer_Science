#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void Calculator(int num1, char op, int num2);
int Reverse(int n);
int Digits(int n);
int PrimeNumber(int n);
int GCD(int n, int n2, int n3);

void Ex1()
{
    int num1, num2;
    char op;
    printf("Enter two numbers and the operator between them: ");
    scanf("%d%c%d", &num1, &op, &num2);
    Calculator(num1, op, num2);
}

void Ex2()
{
    int n;
    printf("Enter the number: ");
    scanf("%d", &n);
    printf("Reversed number is: %d",Reverse(n));
}
void Ex3()
{
    int n;
    printf("Enter the number: ");
    scanf("%d", &n);
    printf("Sum of it's digits is: %d",Digits(n));
}

void Ex4()
{
    int n;
    printf("Enter the number: ");
    scanf("%d", &n);
    printf("Answer is: %d",PrimeNumber(n));
}

void Ex5()
{
    int n,n2,n3;
    printf("Enter the number: ");
    scanf("%d %d %d", &n, &n2, &n3);
    printf("GCD is: %d",GCD(n, n2, n3));
}


void Calculator(int num1, char op, int num2)
{
    switch (op)
    {
    case '+':
        printf("Sum is: %d", num1 + num2);
        break;
    case '-':
        printf("Substraction is: %d", num1 - num2);
        break;
    case '*':
        printf("Multiplication is: %d", num1 * num2);
        break;
    case '/':
        if (num2 == 0)
        {
            printf("Can't divide by zero");
            break;
        }
        printf("Division is: %d", num1 / num2);
        break;
    default:
        printf("Invalid operator");
        break;
    }
}

int Reverse(int n)
{
    int tmp = 0;
    while (n > 0)
    {
        tmp = tmp * 10 + n  % 10;
        n /= 10;
    }
    return tmp;
}

int Digits(int n)
{
    int sum = 0;
    for (int i = 1; i <= 9; i++)
    {
        if (n % i == 0) sum += i;
    }
    return sum;
}

int PrimeNumber(int n)
{
    int flag;
    for (int i = 2; i <= n / 2; i++)
    {
        if (n % i == 0) return flag = 0;
    }
    return flag = 1;
}

int GCD(int n, int n2, int n3)
{
    int gcd = 0;
    for (int i = 1; i <= n && i <= n2 && i <= n3; i++)
    {
        if ((n % i == 0) && (n2 % i == 0) && (n3 % i == 0)) gcd = i;
    }
    return gcd;
}
int main()
{
    //Ex1();
    //Ex2();
    //Ex3();
    //Ex4();
    Ex5();
    return 0;
}
