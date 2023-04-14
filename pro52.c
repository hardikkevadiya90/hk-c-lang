//0,1,3,6,10,15,21,28,36,45,55,....1000
//1,2,3,4,5,6,7,.......
#include<stdio.h>
void main()
{
    int number=0,tamp=1;
    printf("%d ",number);
    // for (tamp = 1;number<990; tamp++)
    while(number<990)
    {
        number=number+tamp; //1
        //  tamp=tamp+1;
        tamp++;
        printf("%d ",number);

    }
    
}