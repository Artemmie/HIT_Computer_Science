#include <stdio.h>
#include <math.h>


void Digits()
{
    int num, digits = 0;
    printf("Enter a 3 digit number: ");
    scanf("%d",&num);
    for(int i = 0; i<=2;i++)
    {
        digits += num % 10;
        num /= 10;
    }
    printf("%d",digits);
}

void ReverseDigits()
{
    int num, newNum = 0;
    printf("Enter a 3 digit number: ");
    scanf("%d",&num);
    for(int i = 100; i > 0; i /= 10)
    {
        newNum += (num % 10) * i;
        num /= 10;
        if (i == 1) i = 0;
    }
    printf("%d",newNum);
}
void DaysConverter()
{
    int days = 0, months = 0, years = 0;
    printf("Enter amount of days: ");
    scanf("%d",&days);
    while (days > 30)
    {
        if (days >= 365) 
        {
            years++;
            days -= 365;
        }
        else
        {
           months++;
           days -= 30; 
        }
    }
    printf("%d years, %d months, %d days",years,months,days);
}
void ComputerScienceGrade()
{
    int workA,workB,workC,exam;
    printf("Enter work grades: ");
    scanf("%d%d%d",&workA,&workB,&workC);
    printf("Enter exam grade: ");
    scanf("%d",&exam);
    double averageWork = (double)((workA + workB + workC) / 3) * 0.2;
    double examGrade = (double)exam * 0.8;
    printf("Your final grade is: %d", (int)(averageWork + examGrade));
}

void NumberPower()
{
    double number;
    printf("Enter the number: ");
    scanf("%lf",&number);
    for(double i = 2; i <= 8; i+=2) printf("Pow of %.0f is %.0lf\n",i, pow(number, i));
}

void FlyAndCars()
{
    int distance, carAspeed, carBspeed, flySpeed;

}
void main()
{
    //Digits();
    //ReverseDigits();
    //DaysConverter();
    //ComputerScienceGrade();
    //NumberPower();
    FlyAndCars();
}