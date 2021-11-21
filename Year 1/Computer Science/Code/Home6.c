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
//---------------------
int main() {
    //Ex1();
    //Ex2();
    //Ex3();
    Ex4();
    //Ex5();
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
}