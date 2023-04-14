#include<stdio.h>
void main()
{
    int students[5],count;
    for (count = 0;count<5;count++)     
    {
        printf("enter the marks of students %d ",count+1);
        scanf("%d",&students[count]);


    }


    for (count = 0;count<5; count++)

    {
        printf("\n marks of the student %d is %d",count+1,students[count]);
    }
    
    
}