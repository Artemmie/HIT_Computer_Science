#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
// EX 1
void Ex1();
char* DuplicateString(char*);
//---------------------------
// EX 2
void Ex2();
char MostUsedChar(char*, int*);
//---------------------------
// EX 3
void Ex3();
int ValidSentence(char* str);
//---------------------------
int main()
{
    //Ex1();
    Ex2();
    //Ex3();
    return -1;
}
void Ex1()
{
    char string[] = "abcd";
    char* newString = DuplicateString(string);
    puts(newString);
}
char* DuplicateString(char* string)
{
    char* newString = (char*)malloc(((strlen(string) * 2) + 1) * sizeof(char));
    for (int i = 0; i < strlen(string); i++)
    {
        newString[i] = string[i];
        newString[strlen(string) + i] = string[i];
    }
    newString[strlen(string) * 2] = '\0';
    return newString;
}
void Ex2() 
{
    char str[] = "strings seem silly";
    int count = 0;
    char ch = MostUsedChar(str, &count);
    printf("count: %d and char: %c", count, ch);
}
char MostUsedChar(char* str, int* count)
{
    int* newArr = (int*)calloc(26, sizeof(int));
    int index = 0;
    for (int i = 0; i < strlen(str); i++)
        newArr[(str[i]) - 'a']++;
    for (int i = 0; i < 26; i++)
        if (newArr[i] > *count)
        {
            *count = newArr[i];
            index = i;
        }
    return ((char)index + 97);
}
void Ex3()
{
    char str[] = "This is valid";
    int result = ValidSentence(str);
    printf("Result: %d", result);
}
int ValidSentence(char* str)
{
    int Capital = 0;
    int Lower = 0;
    for (int i = 0; i < strlen(str)-1; i++)
    {
        if (i == 0)
        {
            if (str[i] <= 'Z' && str[i + 1] <= 'Z') Capital = 1;
            else if (str[i] >= 'a' && str[i + 1] >= 'a') Lower = 1;
        }
        //if (Capital) if (str[i] > 'Z') return 0;
        if (Lower) if (str[i] < 'a' || str[i] > 'z') return 0;
        
    }
}
