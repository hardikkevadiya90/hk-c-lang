#include <stdio.h>
void main()
{
    int student[5], count = 0, sum = 0;
    float avg;
    for (count = 0; count < 5; count++)

    {
        printf("enter the mark of student %d:", count + 1);
        scanf("%d", &student[count]);
    }
    for (count = 0; count < 5; count++)
    {
        printf("\n mark of the student %d is %d", count + 1, student[count]);
    }
    for (count = 0; count < 5; count++)
    {
        sum = sum + student[count];
    }

    printf("\n total marks of student is %d ", sum);
    avg = sum / 5;
    printf("\n avg of marks is %f", avg);
    printf("\n bye bye aavjo ");
}