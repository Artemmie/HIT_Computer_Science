// Course: introduction to computer science
// exercise 1, question 3
// file name: ex1_q3.c
#define _CRT_SECURE_NO_WARNINGS
// --------------------------- //
// include package section:
#include <stdio.h>
// --------------------------- //


// --------------------------- //
// function declaration section:
unsigned long student_id();
double sum_seq(int, double);
// --------------------------- //


// --------------------------- //
// DO NOT CHANGE the following function:
void main()
{
	unsigned long id_num;
	int n;
	double x,sum;
	// read input:
	printf("Enter an integer number n\n");
	scanf("%d", &n);
	printf("Enter a double x\n");
	scanf("%lf", &x);
	// call functions:
	id_num = student_id();
	sum=sum_seq(n,x);
	// write output:
	printf("output: the sum is %lf\n", sum);
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

double sum_seq(int n, double x)
{
	// Your code:
	int factorial = 1;
    for (int i = 1; i <= n; i++)
    {
        factorial * = 1;
    }
}
// --------------------------- //