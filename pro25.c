#include <stdio.h>
void main()
{
    int count = 0, flash = 0;
    for (count = 0; count < 9; count++)
    {
        printf("*");
    }
    for (count = 9; count > 0; count--)
    {
        printf("\n");

        printf("*");

        for (flash = 0; flash < count; flash++)
        {
            printf(" ");
        }

        printf("*");
    }
    printf("\n");
    for (count = 0; count < 1; count++)
    {
        printf("*");
        printf("\n");
    }
}