#define _CRT_SECURE_NO_WARNINGS
#inclue <stdio.h>

// EX 1
void Ex1();
char* DuplicateString(char);
//---------------------------

int main()
{
    Ex1();
    return -1;
}
void Ex1()
{
    char string[] = "abcd";
    char *newString = DuplicateString(string);
    puts(newString);
}
char* DuplicateString(char string[])
{
    int *newString = (char*)malloc((strlen(string) + 1) * 2)
}