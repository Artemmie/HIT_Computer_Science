#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

// EX 1
void Ex1();
char* DuplicateString(char*);
//---------------------------

int main()
{
    Ex1();
    return -1;
}
void Ex1()
{
    char string[] = "abcd";
    puts(DuplicateString(string));
}
char* DuplicateString(char string[])
{
    char *newString = (char*)malloc(((strlen(string) + 1) * 2) * sizeof(char));
    strcpy(newString, string);
    strcpy(newString, string);
    return newString;
}