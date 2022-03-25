// Course: introduction to computer science
// exercise 1, question 4
// file name: ex1_q4.c
#define _CRT_SECURE_NO_WARNINGS
// --------------------------- //
// include package section:
#include <stdio.h>
// --------------------------- //


// --------------------------- //
// function declaration section:
unsigned long student_id();
int sum_proper_divisors(int);
void amicable_numbers(int);
void print_amicable_pair(int, int);
// --------------------------- //


// --------------------------- //
// DO NOT CHANGE the following function:
void main()
{
	unsigned long id_num;
	int num;
	// read input:
	printf("Enter a number and the program will print all the amicable numbers in this field: ");
	scanf("%d", &num);
	// call functions:
	id_num = student_id();
	amicable_numbers(num);
	// write output:
	printf("[id: %lu] finished main\n", id_num);
}
// --------------------------- //


// --------------------------- //
// function implementation section:
unsigned long student_id()
{
	// return your id muber,
	// for example if your id is 595207432
	// return 595207432
	// your code:
    return 326856432;
}

int sum_proper_divisors(int num)
{
	// Your code:
	int sum = 1;
    for (int i = 2; i < num / 2; i++) 
    {
        if (i > num / i) return sum;
		if (num % i == 0) sum += (num / i == i) ? i : (i + num / i);
    }
    return sum;
}

void amicable_numbers(int num)
{
	// Your code:
	int sum;
    for (int i = 220; i < num; i++)
    {
        sum = sum_proper_divisors(i);
        if (sum_proper_divisors(sum) == i && i < sum) printf("(%d,%d)\n",i, sum);
    }
}


// DO NOT CHANGE the following function:
void print_amicable_pair(int num1, int num2)
{
	// write output:
	printf("(%4d ,  %4d )\n", num1, num2);
}
// --------------------------- //