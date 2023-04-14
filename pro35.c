#include <stdio.h>
void main()
{
  int i, j;
  float student[5][5], sum, avg;
  for (i = 0; i < 5; i++)
  {
    printf("enter the mark for student %d:\n", i + 1);
    for (j = 0; j < 5; j++)
    {
      printf("subject %d:", j + 1);
      scanf("%f", &student[5][5]);
    }
  }
  for (i = 0; i < 5; i++)
  {
    sum = 0;
    for (j = 0; j < 5; j++)
    {
      sum += student[i][j];
    }
    avg = sum / 5;
    printf("the average mark of student %d is %f \n", i + 1, avg);
  }
}