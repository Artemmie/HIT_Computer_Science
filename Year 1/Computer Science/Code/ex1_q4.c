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
	int sum = 0;
    for (int i = 2; i <= sqrt(num); i++) 
    {
        if (num % i == 0)
        {
            if (i == (num / i)) sum += i;
            else sum += (i + num / i);
        }
    }
    return (sum + 1);
}

void amicable_numbers(int num)
{
	// Your code:
	int sum;
    for (int i = 2; i < num; i++)
    {
        sum = sum_proper_divisors(i);
        if (sum_proper_divisors(sum) == i) 
        {
            
            printf("Sum - %d, i - %d, proper_divisor for i - %d, proper_divisor for sum - %d | (%d,%d)\n", sum, i, sum_proper_divisors(i), sum_proper_divisors(sum), i, sum);
        }
        
        
    }
}


// DO NOT CHANGE the following function:
void print_amicable_pair(int num1, int num2)
{
	// write output:
	printf("(%4d ,  %4d )\n", num1, num2);
}
// --------------------------- //