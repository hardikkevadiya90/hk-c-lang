#include<stdio.h>
void main()
{
    int month;
    printf("enter the month");
    scanf("%d",&month);
    if (month==1)
    {
        printf("31 days of jan");
    }
    else if (month==2)
    {
        printf("28/29 days of feb");
    }
    else if (month==3)
    {
        printf("31 days of march");
    }
    else if (month==4)
    {
        printf("30 days of apr");
    }
    else if (month==5)
    {
        printf("31 days of may");
    }
     else if (month==6)
    {
        printf("30 days of june");
    }
    else if (month==7)
    {
        printf("31 days of july");
    }
    else if (month==8)
    {
        printf("31 days of aug");
    }
    else if (month==9)
    {
        printf("30 days of sep");
    }
    else if (month==10)
    {
        printf("31 days of oct");
    }
    else if (month==11)
    {
        printf("30 days of nov");
    }
    else if (month==12)
    {
        printf("31 days of dec");
    }

else
{
    printf("invalid month");
}


}