#include<stdio.h>
void main()
{
    float height1,breath1,height2,breath2,office1,office2;
    printf("enter the height1:");
    scanf("%f",&height1);
    printf("enter the breath1:");
    scanf("%f",&breath1);
    printf("enter the height2:");
    scanf("%f",&height2);
    printf("enter the breath2:");
    scanf("%f",&breath2);
    office1=height1*breath1;
    office2=height2*breath2;
    if (office1>office2)
    {
       printf("office2 is smaller"); /* code */
    }
    else 
    {
        printf("office1 is smaller");
    }
}