#include <stdio.h>
void main()
{
    int i=0, j=0;
    float score[5][5];
    // for (i = 0; i < 5; i++)
    while(i<5)
    {
        printf("enter the score for student %d:\n", i + 1);
        for (j = 0; j < 5; j++)
        {
            printf("subject %d:", j + 1);
            scanf("%f", &score[i][j]);
        }
        i++;
    }i=0;
    // for (i = 0; i < 5; i++)
    while(i<5)
    {
        float sum = 0;
        for (int j = 0; j < 5; j++)
        {
            sum += score[i][j];
        }
        float avg = sum / 5;
        printf(" the avarage score of student %d is %.2f \n", i + 1, avg);
        i++;
    }
}