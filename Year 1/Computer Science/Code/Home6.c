#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>


// EX 1 FUNCTIONS
void Ex1();
double Nmultiplier(double, int);
//---------------------
// EX 2 FUNCTIONS
void Ex2();
int Lucas(int);
int LucasNoRecursion(int);
//---------------------
// EX 3 FUNCTIONS
void Ex3();
int Paul(int);
int PaulNoRecursion(int);
//---------------------
// EX 4 FUNCTIONS
void Ex4();
int S(int);
int SNoRecursion(int);
//---------------------
// EX 5 FUNCTION
void Ex5();
int BiggestNum(int);
//---------------------
// EX 6 FUNCTION
void Ex6();
int SmallestNum(int);
//---------------------
// EX 7 FUNCTION
void Ex7();
void DecToBin(int);
//---------------------
// EX 8 FUNCTION
void Ex8();
void IntChaCha(int, char, char);
//---------------------
// EX 9 FUNCTION
void Ex9();
int DigitInduct(int);
int DigitDeduct(int);
//---------------------
// EX 10 FUNCTION
void Ex10();
int OddOrEven(int);
//---------------------
// EX 11 FUNCTION
void Ex11();
int EvenAndUneven(int);
//---------------------
// EX 12FUNCTION
void Ex12();
int Changeable(int);
//---------------------


int main() {
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
    //Ex11();
    Ex12();
    return 0;
}

void Ex1() {
    double x;
    int num;
    printf("Enter the x:");
    scanf("%lf", &x);
    printf("Enter the n:");
    scanf("%d", &num);
    printf("%f",Nmultiplier(x, num));
}
double Nmultiplier(double x, int n)
{
    //printf("N is %d, X is %f\n", n, x);
    if (n == 0) return x;
    //n % 2 == 0 ? printf("Their pow is: %f | Their pow * pow is:%f\n", pow(x,(double)n/2), pow(x,(double)n/2) * 2) : printf("Their pow is: %f | Their pow * pow * x is:%f\n", pow(x,(double)n/2), pow(x,(double)n/2) * 2 * x);
    return n % 2 == 0 ? Nmultiplier(pow(x,(double)n/2) * 2, n-1) : Nmultiplier(pow(x, (double)n/2) * 2 * x, n-1);
}
void Ex2() {
    int num;
    printf("Enter the number:");
    scanf("%d", &num);
    printf("%d\n", Lucas(num));
    printf("%d", LucasNoRecursion(num));
}
int Lucas(int n)
{
    if (n == 0) return 2;
    if (n == 1) return 1;
    return Lucas(n-1) + Lucas(n-2);
}
int LucasNoRecursion(int n)
{
    if (n == 0) return 2;
    if (n == 1) return 1;
    int num = 1, prevNum = 2, result;
    for (int i = 2; i <= n; i++)
    {
        result = num + prevNum;
        prevNum = num;
        num = result;
    }
    return result;
}
void Ex3() {
    int num;
    printf("Enter the number:");
    scanf("%d", &num);
    printf("%d\n", Paul(num));
    printf("%d", PaulNoRecursion(num));
}
int Paul(int n)
{
    if (n == 0) return 0;
    if (n == 1) return 1;
    return 2 * Paul(n-1) + Paul(n-2);
}
int PaulNoRecursion(int n)
{
    if (n == 0) return 0;
    if (n == 1) return 1;
    int currNum = 1, prevNum = 0, result;
    for (int i = 2; i <= n; i++)
    {
        result = 2 * currNum + prevNum;
        prevNum = currNum;
        currNum = result;
    }
    return result;
}
void Ex4() {
    int num;
    printf("Enter the number:");
    scanf("%d", &num);
    printf("%d\n", S(num));
    printf("%d", SNoRecursion(num));
}
int S(int n)
{
    if (n == 0 || n == 1 || n == 2) return 1;
    return n % 2 == 0 ? S(n-1) + S(n-2) + S(n-3) : S(n-1) - S(n-3);
}
int SNoRecursion(int n)
{
    if (n == 0 || n == 1 || n == 2) return 1;
    int currNum = 1, prevNum = 1, prevPrevNum = 1, result;
    for (int i = 3; i <= n; i++)
    {
        result = i % 2 == 0 ? currNum + prevNum + prevPrevNum : currNum - prevPrevNum;
        prevPrevNum = prevNum;
        prevNum = currNum;
        currNum = result;
    }
    return result;
}
void Ex5() {
    int num;
    printf("Enter the number:");
    scanf("%d", &num);
    printf("%d", BiggestNum(num));
}
int BiggestNum(int num)
{
    if (num == 0) return INT_MIN;
    int n;
    printf("Enter n: ");
    scanf("%d", &n);
    int n2 = BiggestNum(num-1);
    return n > n2 ? n : n2;
}
void Ex6()
{
    int num;
    printf("Enter the number: ");
    scanf("%d", &num);
    printf("%d", SmallestNum(num));
}
int SmallestNum(int num)
{
    if (num == 0) return INT_MAX;
    int n;
    printf("Enter n: ");
    scanf("%d", &n);
    int n2 = SmallestNum(num-1);
    return n < n2 ? n : n2;
}
void Ex7()
{
    int num;
    printf("Enter the number: ");
    scanf("%d", &num);
    DecToBin(num);
}
void DecToBin(int num)
{
    if (num == 0) return;
    DecToBin(num/2);
    num % 2 == 0 ? printf("0") : printf("1");
}
void Ex8()
{
    int num;
    char c1, c2;
    printf("Enter the number:");
    scanf("%d", &num);
    printf("Enter first character:");
    scanf(" %c", &c1);
    printf("Enter second character:");
    scanf(" %c", &c2);
    IntChaCha(num, c1, c2);
}
void IntChaCha(int num, char c1, char c2)
{
    if (num == 0) return;
    printf("%c", c1);
    IntChaCha(num - 1, c1, c2);
    printf("%c%c", c2, c2);
}
void Ex9()
{
    int num;
    printf("Enter the number: ");
    scanf("%d", &num);
    printf("%d\n", DigitDeduct(num));
    printf("%d", DigitInduct(num));
}
int DigitInduct(int num)
{
    if (num == 0) return 0;
    return num % 10 <= 8 ?(num % 10 + 1) + DigitInduct(num / 10) * 10 : 0 + DigitInduct(num / 10) * 10;

}
int DigitDeduct(int num)
{
    if (num == 0) return 0;
    return num % 10 >= 1 ? (num % 10 - 1) + DigitDeduct(num / 10) * 10 : 9 + DigitDeduct(num / 10) * 10;
}
void Ex10()
{
    int num;
    printf("Enter the number: ");
    scanf("%d", &num);
    printf("%d", OddOrEven(num));
}
int OddOrEven(int num)
{
    static int sum;
    if (num == 0) return 0;
    sum += num % 10;
    OddOrEven(num / 10);
    return sum % 2 == 0 ? 1 : 0;

}
void Ex11()
{
    int num;
    printf("Enter the number: ");
    scanf("%d", &num);
    printf("%d", EvenAndUneven(num));
}
int EvenAndUneven(num)
{
    static int flag = 1, x;
    if (num == 0 || flag == 0) return 0;
    if (((num % 10) % 2 == 1 && x % 2 == 0) || ((num % 10) % 2 == 0 && x % 2 == 1)) flag = 0;
    else flag = 1;
    printf("Run number %d, digit is %d, flag is %d\n", x, num % 10, flag);
    x++;
    EvenAndUneven(num / 10);
    return flag;
}
void Ex12()
{
    int num;
    printf("Enter the number: ");
    scanf("%d", &num);
    printf("%d", Changeable(num));
}
int Changeable(int num)
{
    if (num / 10 == 0) return 1;
    int s = (num % 10) % 2 + ((num / 10) % 10) % 2 != 1 ? 0 : 1;
    if (s == 0) return 0;
    return Changeable(num / 10) == 0 ? 0: 1
}