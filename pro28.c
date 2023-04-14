//1,5,12,22,35,51,70,...3000
#include<stdio.h>
void main()
{
    int number=1,tamp=4;
    printf("%d ",number); //1
    for (number= 1;number<3000; tamp=tamp+3)
    {
        number=number+tamp;
        printf("%d ",number);
    }
    








    // number=number+tamp;
    // printf("%d ",number);
    // tamp=tamp+3;
    // number=number+tamp;
    // printf("%d ",number);
    //  tamp=tamp+3;
    // number=number+tamp;
    // printf("%d ",number);

}