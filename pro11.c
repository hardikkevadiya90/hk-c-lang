#include<stdio.h>
#include<stdlib.h>
void main()
{
    int a;
    float b;
    char name;
    printf("enter the value of a: ");
    scanf("%d",&a);
    printf("enter the value of b: ");
    scanf("%f",&b);
    printf("enter the  name: ");
    fflush(stdin);
    scanf("%c",&name);
    printf("\n the value of a: %d",a);
    printf("\n the value of b: %.2f",b);
    printf("\n the name is: %c",name);
}

