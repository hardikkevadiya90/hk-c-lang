// short array
#include <stdio.h>
void main()
{
    int number[6], count = 0, tamp, flash;
    // while (count < 6)
    for (count= 0; count<6; count++)
  
    {
        printf("enter the number %d:", count + 1); // 1 2 3 4 5 6
        scanf("%d", &number[count]);
        // count++;
    }
    count = 0;
    do
    {
        printf("\n number %d is %d ", count + 1, number[count]);
        count++;

    }
     while (count < 6); // count=6
    for (flash = 0; flash < 7; flash++)
    {
        // for (count = flash + 1; count < 7; count++)
        count=flash+1;
        while(count<7)

        {
            if (number[count] > number[flash])
            {
                tamp = number[flash];
                number[flash] = number[count];
                number[count] = tamp;
            }
            count++;
        }
    }
    printf("\n");
    count = 0; 
    for (count = 0;count<6; count++)
    {
       printf("\n number %d is %d ", count + 1, number[count]);
    }
    
    // do
    // {
    //     printf("\n number %d is %d ", count + 1, number[count]);
    //     count++;

    // } while (count < 6);
}