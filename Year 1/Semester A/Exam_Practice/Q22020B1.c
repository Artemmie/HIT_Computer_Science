#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>;
typedef struct student
{
    unsigned id;
    char name[20];
    int grade;
}Student;

Student* studentGrade(Student *st, int n, int grade)
{
    int start = 0, end = n-1, mid = 0;
    while (start <= end)
    {
        mid = (start + end) / 2;
        if (st[mid].grade == grade && st[mid-1].grade != grade) return st;
        if (st[mid].grade >= grade) end = mid - 1;
        else start = mid + 1;
    }
    return NULL;
}

void main()
{
    Student a2[] = {{1, "Dany", 20}, {2, "Uri", 35}, {5, "Artem", 80}, {3, "Rotem", 100}};
    Student* res2;
    res2 = studentGrade(a2, 4, 100);
    printf("%s", res2->name);
}