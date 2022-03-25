#include <stdio.h>
void Name()
{
    printf("Hello Artem\n\n");
}

void Pi()
{
    double pi = 3.141592;
    printf("%.2f\n\n", pi);
}
void Triangle()
{
    printf("  *  \n *** \n*****\n\n");
}
void Operators()
{
    int a = 5, b = 3;
    printf("%d * %d = %d\n", a, b, a * b);
    printf("%d / %d = %d\n", a, b, a / b);
    printf("%d mod %d = %d\n\n", a, b, a % b);
}
void Switch()
{
    int a = 5, b = 3;
    printf("a = %d | b = %d\n", a, b);
    a = a + b;
    b = a - b;
    a = a - b;
    printf("a = %d | b = %d\n", a, b);
}

void main()
{
    Name();
    Pi();
    Triangle();
    Operators();
    Switch();
}