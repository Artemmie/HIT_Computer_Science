#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>


// EX 1 FUNCTIONS
int Square(int num);
int Cube(int num);
int Power(int num, int pwr);
//---------------------
// EX 2 FUNCTIONS
int IsEven(int num);
int IsOdd(int num);
//---------------------
// EX 3 FUNCTIONS
int DigitsAmount(int digit);
//---------------------
// EX 4 FUNCTIONS
int MyToLower(char ch);
int MyToUpper(char ch);
//---------------------


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

void Ex2()
{
	int num;
	printf("Enter the number:");
	scanf("%d", &num);
	printf("IsEven: %d | IsOdd: %d", IsEven(num), IsOdd(num));
}

void Ex3()
{
	int digit;
	printf("Enter the number:");
	scanf("%d", &digit);
	printf("Digits: %lu", DigitsAmount(digit));
}

void Ex4()
{
	printf("Enter the character:");
	char ch = getchar();
	printf("", MyToLower(ch));
	printf("", MyToUpper(ch));
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
int IsEven(int num)
{
	return num % 2 == 0 ? 1 : 0;
}
int IsOdd(int num)
{
	return IsEven(num) == 1 ? 0 : 1;
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

int main()
{
	//Ex1();
	//Ex2();
	//Ex3();
	Ex4();
	return 0;
}