#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>

// EX 1 FUNCTIONS
void Ex1();
int EvenNumber(int);
//---------------------
// EX 2 FUNCTIONS
void Ex2();
int Fibbonaci(int);
//---------------------
// EX 3 FUNCTIONS
void Ex3();
int Counter(int);
int Sum(int);
int Sorted(int);
//---------------------
// EX 4 FUNCTIONS
void Ex4();
int CheckNumbers(int);
//---------------------
// EX 5 FUNCTION
void Ex5();
void DigitsCounter(int);
void ReversedDigitsCounter(int);
void DigitsRange(int);
//---------------------
int main() {
    //Ex1();
    Ex2();
    //Ex3();
    //Ex4();
    //Ex5();
    return 0;
}

void Ex1() {
    int num;
    printf("Enter the number:");
    scanf("%d", &num);
    printf("Even = 1 | Odd = 0 : %d\n", EvenNumber(num));
}
int EvenNumber(int num) {
    if (num == 0) return 0;
    return num % 2 == 0 ? 1: EvenNumber(num / 10);
}
void Ex2() {
    int num;
    printf("Enter the number:");
    scanf("%d", &num);
    printf("%d\n", Fibbonaci(num));
}
int Fibbonaci(int num) {
    if (num == 0) return 0;
    if (num == 1) return 1;
    return Fibbonaci(num - 1) + Fibbonaci(num - 2);
}
void Ex3() {
    int num;
    printf("Enter the number:");
    scanf("%d", &num);
    printf("Counter - %d\n", Counter(num));
    printf("Sum - %d\n", Sum(num));
    printf("Sorted - %d\n", Sorted(num));
}
int Counter(int num) {
    if (num == 0) return 0;
    return 1 + Counter(num / 10);
}
int Sum(int num) {
    if (num == 0) return 0;
    return num % 10 + Sum(num / 10);
}
int Sorted(int num) {
    if (num / 10 == 0) return 1;
    return num % 10 < (num / 10) % 10 ? Sorted(num / 10): 0;
}
void Ex4() {
    int num;
    printf("Enter the number:");
    scanf("%d", &num);
    printf("Counter - %d\n", CheckNumbers(num));
}
int CheckNumbers(int num) {
    int i;
    printf("Enter a number:");
    scanf("%d", &i);
    if (i == -1) return 0;
    return i < num ? 1 + CheckNumbers(num): CheckNumbers(num);
}
void Ex5() {
    int num;
    printf("Enter the number:");
    scanf("%d", &num);
    DigitsCounter(num);
    printf("\n");
    ReversedDigitsCounter(num);
    printf("\n");
    DigitsRange(num);
}
void DigitsCounter(int num) {
    if (num == 0) return;
    printf("%d ", num);
    DigitsCounter(num - 1);
}
void ReversedDigitsCounter(int num) {
    if (num == 0) return;
    ReversedDigitsCounter(num-1);
    printf("%d ", num);
}
void DigitsRange(int num) {
    if (num == 1)
    {
        printf("1 ");
        return;
    } 
    printf("%d ", num);
    DigitsRange(num-1);
    printf("%d ", num);
}