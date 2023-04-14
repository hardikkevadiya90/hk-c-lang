// 2,1,3,4,7,11,18,29,....3220

#include <stdio.h>
void main()
{
    int number = 2, tamp = 1, count=0;
    printf("%d ", number);
    printf("%d ", tamp);
    do
    {count=0;
        number = number + tamp; // 3
        printf("%d ", number);
        tamp = number + tamp;
        printf("%d", tamp);
        
        count++;
        
    }
     while ( count < 3000);
    

    // number=number+tamp; //4
    //  printf("%d ",number);
    //  tamp=tamp+2; //3
    //  number=number+tamp; //7
    //  printf("%d ",number);
    //  tamp=number+4; //4
    //  number=number+tamp;//11
    //  printf("%d ",number);
}