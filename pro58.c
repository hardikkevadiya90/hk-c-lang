#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct student
{
    int rollno, total_marks;
    char name[20];
};
void main()
{
    struct student s[3];
    int i = 0;
    // for (i = 0; i < 3; i++)
    while (i < 3)
    {
        printf("enter the student %d name:", i + 1);
        fflush(stdin);
        scanf("%s", &s[i].name);
        printf("enter the roll number of student %d :", i + 1);
        scanf("%d", &s[i].rollno);
        printf("enter the total mark of student %d:", i + 1);
        scanf("%d", &s[i].total_marks);
        i++;
    }
    i = 0;
    // for (i = 0; i < 3; i++)
    while (i < 3)
    {
        printf("\n student  %d name is  %s roll number is %d and his total marks is %d ", i + 1, s[i].name, s[i].rollno, s[i].total_marks);
        i++;
    }
}