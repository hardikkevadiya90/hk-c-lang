#include <stdio.h>
void main()
{
    int student[5], count = 0;
    while (count < 5)
    {
        printf("enter the mark of student %d:", count + 1);
        scanf("%d", &student[count]);
        count++;
    }
    count = 0;

    while (count < 5)
    {
        printf("\n mark of students %d are %d", count + 1, student[count]);

        count++;
    }
}