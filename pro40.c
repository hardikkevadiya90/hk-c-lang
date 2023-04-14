#include<stdio.h>
void main()
{
    int foot,inch;
    float weight,height,totalinch,meter,bmi;
    printf("enter the weight in kg:");
    scanf("%f",&weight);
    printf("enter the height in foot:");
    scanf("%d",&foot);
    printf("enter the inch:");
    scanf("%d",&inch);
    totalinch=foot*12;
    totalinch=totalinch+inch;
    meter=totalinch/39.37;
    printf("your height in meter is:%f\n",meter);
    bmi=weight/(meter*meter);
    printf("your bmi value is:%f",bmi);

}