#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>


// EX 1 FUNCTIONS
void Ex1();
int Square(int);
int Cube(int);
int Power(int, int);
//---------------------
// EX 2 FUNCTIONS
void Ex2();
int IsEven(int);
int IsOdd(int);
//---------------------
// EX 3 FUNCTIONS
void Ex3();
long DigitsAmount(int);
//---------------------
// EX 4 FUNCTIONS
void Ex4();
int MyToLower(char);
int MyToUpper(char);
//---------------------
// EX 5 FUNCTION
void Ex5();
int TestChars(char, char, char);
//---------------------
// EX 6 FUNCTIONS
void Ex6();
int MyGCD(int, int);
//---------------------
// EX 7 FUNCTIONS
void Ex7();
int Dividers(int);
//---------------------
// EX 8 FUNCTIONS
void Ex8();
int SmallestDivider(int);
//---------------------
// EX 9 FUNCTIONS
void Ex9();
int BiggestDivider(int);
//---------------------
// EX 10 FUNCTIONS
void Ex10();
void SimplifiedFraction(int, int);
int GCD(int, int);
//---------------------
// EX 11 FUNCTIONS
void Ex11();
int LCM(int, int);
//---------------------

int main()
{
    //Ex1();
    //Ex2();
    //Ex3();
    //Ex4();
    //Ex5();
    //Ex6();
    //Ex7();
    //Ex8();
    //Ex9();
    //Ex10();
    Ex11();
    return 0;
}

void Ex1()
{
    int num, pwr;
    printf("Enter the number:");
    scanf("%d", &num);
    printf("Square: %d\n", Square(num));
    printf("Cube: %d\n", Cube(num));
    printf("Enter the power:");
    scanf("%d", &pwr);
    printf("Power: %d\n", Power(num, pwr));
}

int Square(int num)
{
    return num * num;
}
int Cube(int num)
{
    return num * num * num;
}
int Power(int num, int pwr)
{
    int tmp = num;
    for (int i = 1; i < pwr; i++) num *= tmp;
    return num;
}

void Ex2()
{
    int num;
    printf("Enter the number:");
    scanf("%d", &num);
    printf("IsEven: %d | IsOdd: %d", IsEven(num), IsOdd(num));
}

int IsEven(int num)
{
    return num % 2 == 0 ? 1 : 0;
}
int IsOdd(int num)
{
    return IsEven(num) == 1 ? 0 : 1;
}

void Ex3()
{
    int digit;
    printf("Enter the number:");
    scanf("%d", &digit);
    printf("Digits: %ld", DigitsAmount(digit));
}

long DigitsAmount(int digit)
{
    long digits = 0;
    for (int i = 0; i < digit; i++)
    {
        digits = digits * 10 + 1;
    }
    return digits;
}

void Ex4()
{
    printf("Enter the character:");
    char ch = getchar();
    MyToLower(ch) == -1 ? printf("To Lower is: %d\n", MyToLower(ch)) : printf("To Lower is: %c\n", (char)MyToLower(ch));
    MyToUpper(ch) == -1 ? printf("To Upper is: %d", MyToUpper(ch)) : printf("To Upper is: %c", (char)MyToUpper(ch));
}

int MyToLower(char ch)
{
    return ((int)(ch) >= 65 && (int)(ch) <= 90) ? (int)(ch)+32 : -1;
}
int MyToUpper(char ch)
{
    return ((int)(ch) >= 97 && (int)(ch) <= 122) ? (int)(ch)-32 : -1;
}

void Ex5()
{
    char a, b, c;
    printf("Enter 3 numbers:");
    a = getchar();
    b = getchar();
    c = getchar();
    printf("The number is : %d", TestChars(a, b, c));
}

int TestChars(char a, char b, char c)
{
    int num = 0;
    if ((int)a < 48 || (int)a > 57) return 0;
    num += (int)a - 48;
    num *= 10;
    if ((int)b < 48 || (int)b > 57) return 0;
    num += (int)b - 48;
    num *= 10;
    if ((int)c < 48 || (int)c > 57) return 0;
    num += (int)c - 48;
    return num;
}

void Ex6()
{
    int num1, num2;
    printf("Enter first number: ");
    scanf("%d", &num1);
    printf("Enter second number: ");
    scanf("%d", &num2);
    printf("Answer is: %d", MyGCD(num1, num2));
}

int MyGCD(int num1, int num2)
{
    int max = 0, tmp = 0;
    max = num1 >= num2 ? num1 : num2;
    for (int i = 1; i <= max / 2; i++)
        if ((num1 % i == 0) && (num2 % i == 0)) tmp += i;
    return tmp;
}

void Ex7()
{
    int num;
    printf("Enter the number: ");
    scanf("%d", &num);
    printf("The result is: %d", Dividers(num));
}

int Dividers(int num)
{
    return sqrt((double)num) - floor(sqrt((double)num)) == 0 ? 1 : 0;
}

void Ex8()
{
    int num;
    printf("Enter the number: ");
    scanf("%d", &num);
    printf("The result is: %d", SmallestDivider(num));
}

int SmallestDivider(int num)
{
    for (int i = 2; i <= num / 2; i++)
        if (num % i == 0) return i;
    return num;
}

void Ex9()
{
    int num;
    printf("Enter the number: ");
    scanf("%d", &num);
    printf("The result is: %d", BiggestDivider(num));
}

int BiggestDivider(int num)
{
    for (int i = num / 2; i > 2; i--)
        if (num % i == 0) return i;
    return 1;
}

void Ex10()
{
    int numerator, denominator;
    printf("Enter first number: ");
    scanf("%d", &numerator);
    printf("Enter second number: ");
    scanf("%d", &denominator);
    SimplifiedFraction(numerator, denominator);
}
void SimplifiedFraction(int numerator, int denominator)
{
    if (denominator == 0)
        return printf("Can't divide by zero!");
    printf("%d/%d", numerator / GCD(numerator, denominator), denominator / GCD(numerator, denominator));
}
int GCD(int a, int b)
{
    return b != 0 ? GCD(b, a % b) : a;
}

void Ex11()
{
    int num1, num2;
    printf("Enter first number: ");
    scanf("%d", &num1);
    printf("Enter second number: ");
    scanf("%d", &num2);
    printf("The result is: %d", LCM(num1, num2));
}
int LCM(int num1, int num2)
{
    int tmp;
    tmp = num1 >= num2 ? num1 : num2;
    for (int i = tmp; i <= num1 * num2; i++)
        if (GCD(i, num1) == num1 && GCD(i, num2) == num2) return i;
    return num1 * num2;
}
