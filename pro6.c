// area of square 
#include<stdio.h>
void main()
{
    float height1,height2,office1,office2;
    printf("enter the height1:");
    scanf("%f",&height1);
    printf("enter the height2:");
    scanf("%f",&height2);
    office1=height1;
    office2=height2;
    if (office1>office2)
    {
       printf("office2 is smaller"); /* code */
    }
    else 
    {
        printf("office1 is smaller");
    }
}