#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>


void SumOfNumbers()
{
	int sum = 0;
	for (int i = 1; i <= 1000; i++)
	{
		if (i % 15 == 0) sum += i;
		else if (i % 3 == 0 || i % 5 == 0) sum += i;
	}
	printf("Sum of all numbers from 1 to 1000 is %d\n", sum);
}

void AscendingNumber()
{
	int n, number1 = 0, number2 = 0;
	printf("Enter number of numbers you want to check: ");
	scanf("%d", &n);
	do
	{
		printf("Enter the number:");
		scanf("%d", &number1);
		if (number1 > number2) number2 = number1;
		else
		{
			printf("Not very ascending!");
			return;
		}
		n--;
	} while (n != 0);
	printf("Very ascending!");
}
void Ex3()
{
	int n;
	int odd = 0, even = 0;
	printf("Enter the number: ");
	scanf("%d", &n);
	for(n; n > 0; n /= 10)
	{
		if (n % 2 == 0) even += n % 10;
		else odd += n % 10;
	}
	printf("Result is: %d", even - odd);
}

void Ex4()
{
	int binary, index = 1, number = 0;
	printf("Enter the binary number: ");
	scanf("%d", &binary);
	if (binary % 10 != 1 && binary % 10 != 0) binary / 10;
	while (binary == 0 && binary == 1)
	{
		if (binary % 10 == 1) number += index;
		index *= 2;
		binary / 10;
		printf("%d", number);
        number += index;
	}
	
	printf("Result is: %d", number);
}

int main()
{
	//SumOfNumbers();
	//AscendingNumber();
	//Ex3();
	Ex4();
	return 0;
}
