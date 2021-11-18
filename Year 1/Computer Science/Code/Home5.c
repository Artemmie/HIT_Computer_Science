#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>


// EX 1 FUNCTIONS
int Square(int);
int Cube(int);
int Power(int, int);
//---------------------
// EX 2 FUNCTIONS
int IsEven(int);
int IsOdd(int);
//---------------------
// EX 3 FUNCTIONS
long DigitsAmount(int);
//---------------------
// EX 4 FUNCTIONS
int MyToLower(char);
int MyToUpper(char);
//---------------------
// EX 5 FUNCTIONS
int TestChars(char, char, char);
//---------------------
// EX 6 FUNCTIONS
void Ex6();
int MyGCD(int, int);
//---------------------

int main()
{
	//Ex1();
	//Ex2();
	//Ex3();
	//Ex4();
	//Ex5();
	Ex6();
	
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
	printf("Digits: %ld", DigitsAmount(digit));
}

void Ex4()
{
	printf("Enter the character:");
	char ch = getchar();
	MyToLower(ch) == -1 ? printf("To Lower is: %d\n", MyToLower(ch)) : printf("To Lower is: %c\n", (char)MyToLower(ch));
	MyToUpper(ch) == -1 ? printf("To Upper is: %d", MyToUpper(ch)) : printf("To Upper is: %c", (char)MyToUpper(ch));
}

void Ex5()
{
	char a, b, c;
	printf("Enter 3 numbers:");
	a = getchar();
	b = getchar();
	c = getchar();
	printf("The number is : %d", TestChars(a,b,c));
}
void Ex6()
{
    int num1, num2;
    printf("Enter first number: );
    scanf("%d", num1);
    printf("Enter second number: ");
    scanf("%d", num2);
    printf("%d////%d", num1, num2);
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

int MyToLower(char ch)
{
	return ((int)(ch) >= 65 && (int)(ch) <= 90) ? (int)(ch) + 32 : -1;
}
int MyToUpper(char ch)
{
	return ((int)(ch) >= 97 && (int)(ch) <= 122) ? (int)(ch) - 32 : -1;
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