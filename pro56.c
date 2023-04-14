// struct full programme
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
struct time
{
    int hours;
    float minute_second;
    char name[25];
};

struct student
{
    int rollno, total_marks;
    char name[20];
};
void main()
{
    struct time country[3];
    int count;
    for (count = 0; count < 3; count++)
    {
        printf("enter the hours of country %d:", count + 1);
        scanf("%d", &country[count].hours);
        printf("enter the minutes_second of country %d:", count + 1);
        scanf("%f", &country[count].minute_second);
        fflush(stdin);
        printf("enter the name of  country %d:", count + 1);
        scanf("%s", &country[count].name);
    }
    for (count = 0; count < 3; count++)
    {
        printf("\n  time of country %d  hours: %d minutes_second %.2f :name: %s", count + 1, country[count].hours, country[count].minute_second,country[count].name);
    }
    printf("\n");

    struct student s[3];
    int i;
    for (i = 0; i < 3; i++)
    {
        printf("enter the student %d name:", i + 1);
        fflush(stdin);
        scanf("%s", &s[i].name);
        printf("enter the roll number of student %d :", i + 1);
        scanf("%d", &s[i].rollno);
        printf("enter the total mark of student %d:", i + 1);
        scanf("%d", &s[i].total_marks);
    }
    for (i = 0; i< 3; i++)
    {
        printf("\n student  %d name is  %s roll number is %d and his total marks is %d ", i + 1, s[i].name, s[i].rollno, s[i].total_marks);
    }
}
