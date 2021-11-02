#include <stdio.h>

void BirthYear()
{
    int currentYear;
    int age;
    scanf("%d%d",&currentYear,&age);
    printf("Birth year is %d\n", currentYear - age);
}

void X()
{
    printf("*     *\n *   * \n  * *   \n   *   \n  * *   \n *   * \n*     *\n");
}

void Bob()
{
    long id;
    double paymentHourly, paymentReturn;
    int hourlyWork, workPerWeek, yearFired, yearStarted;
    printf("Enter your ID:");
    scanf("%ld", &id);
    printf("Enter year you started to work:");
    scanf("%d", &yearStarted);
    printf("Enter year you got fired:");
    scanf("%d", &yearFired);
    if (yearFired - yearStarted >= 1)
    {
        printf("Enter your hourly payment: ");
        scanf("%lf", &paymentHourly);
        printf("Enter your hours of work per day: ");
        scanf("%d", &hourlyWork);
        printf("Enter your days work per week: ");
        scanf("%d", &workPerWeek);
        paymentReturn = (4 * workPerWeek) * hourlyWork * paymentHourly * (yearFired - yearStarted);
        printf("Your bonus is: %.2f",paymentReturn);
    }
    else printf("You get no payments!");
}

void Alice()
{
    int productA, productB;
    double priceA, priceB, average;
    printf("How many of products A you bought?: ");
    scanf("%d", &productA);
    printf("Product A price?: ");
    scanf("%lf", &priceA);

    printf("How many of products B you bought?: ");
    scanf("%d", &productB);
    printf("Product B price?: ");
    scanf("%lf", &priceB);

    average = (productA * priceA + productB * priceB) / (productA + productB);
    printf("Alice paid in average: %.2f NIS",average);
}

void distanceTraveled()
{
    int distance, speed;
    printf("What is the distance: ");
    scanf("%d", &distance);
    printf("Car's speed: ");
    scanf("%d", &speed);
    int hours = distance / speed;
    int minutes = (distance % speed) / (speed / 60.0);
    printf("It will take %d hours and %d minutes.",hours, minutes);
}
void main()
{
    //BirthYear();
    //X();
    //Bob();
    //Alice();
    //distanceTraveled();
}