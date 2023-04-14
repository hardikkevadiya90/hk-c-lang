#include <stdio.h>
void main()
{
    int count = 0, space = 0;
    printf("1");
    printf("\n");
    // for(space=2;space < 7;space++)
    space=2;
    while (space<7)
    
    {
        
        printf("1");
        
        for (count = 2; count < space; count++)
        {
            printf(" ");
        }
       
        printf("%d", count);
        printf("\n");
        space++;
        

        
    }
   
    count = 0;
     while (count<7)
     {
        
        printf("%d",count+1);
        count++;
        /* code */
     }
     
    // }
}