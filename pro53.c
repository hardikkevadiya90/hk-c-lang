//1,5,12,35,51,70,92,117,145,....3000
// 3 3 3 3 3 3....
#include<stdio.h>
void main()
{
    int number=1,tamp=4;
    printf("%d ",number);
    // for (number= 1;number<2882; tamp=tamp+3)
    while(number<2882)
    
    {
        number=number+tamp; //5
        tamp=tamp+3;
        printf("%d ",number);
    }
    
}