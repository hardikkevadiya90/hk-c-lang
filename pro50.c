#include <stdio.h>
void main()
{
    int student[5][5], count = 0, std_count = 0, total[5], avg_total = 0;
    float avg;
    // for (std_count = 0; std_count < 5; std_count++)
    while(std_count<5)
    {
        printf("enter the mark of student %d", std_count + 1);
        for (count = 0; count < 5; count++)
        {
            printf("\n enter the mork of %d:", count + 1);
            scanf("%d", &student[std_count][count]);
        }
        std_count++;
    } std_count=0;
    // for (std_count = 0; std_count < 5; std_count++)
    while(std_count<5)
    {
        printf("\n mark of student %d are \n ", std_count + 1);
        for (count = 0; count < 5; count++)
        {
            printf("\n mark of subject %d are %d", count + 1, student[std_count][count]);
        }
        std_count++;
    }std_count=0;
    // for (std_count = 0; std_count < 5; std_count++)
    while(std_count<5)
    {
        total[std_count] = 0;
        for (count = 0; count < 5; count++)
        {
            total[std_count] = total[std_count] + student[std_count][count];
        }
        printf("\n total of %d student mark is %d ", std_count + 1, total[std_count]);
        std_count++;
    }count=0;
    // for (count = 0; count < 5; count++)
    while(count<5)
    {
        avg_total = avg_total + total[count];
        avg = avg_total / (float)5;
        printf("\n mark of avg of all student is %f", avg);
        count++;
    }
}