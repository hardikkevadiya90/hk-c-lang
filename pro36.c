#include<stdio.h>
void main()
{
    int employee[3][3],i=0,j=0,total[3],avgtotal=0;
    float avg;
    for ( j = 0; j < 3; j++)
    {
        printf("enter the salary for employee %d",j+1);
        for ( i = 0; i < 3; i++)
        {
            printf("\n enter the salary %d:",i+1);
            scanf("%d",employee[j][i]);
        }
        
    }
    for ( j = 0; j < 3; j++)
    {
    printf("\n salary of employee %d are \n",j+1 );
    for ( i = 0; i < 3; i++)
    {
        printf("\n salary of employee %d are %d",i+1,employee[j][i]);

    }
    
    }
    
}