#include <stdio.h>
#include <stdlib.h>
void main()
{
    int num1, num2;
    float ans;
    char choice == 'c';
    while (choice == 'c')
    {
        printf("enter num 1:");
        scanf("%d", &num1);
        printf("enter num2:");
        scanf("%d", &num2);
        printf("\n 1 for + \n 2 for - \n 3 for * \n 4 for / ");
        printf("\n enter any num");
        fflush(stdin);
        scanf("%c", &choice);
        if (choice == '1')
        {
            ans = num1 + num2;
            printf("ans is: %f", ans);
        }
        else if (choice == '2')
        {
            ans = num1 - num2;
            printf("ans is: %f", ans);
        }
        else if (choice == '3')
        {
            ans = num1 * num2;
            printf("ans is: %f", ans);
        }
        else if (choice == '4')
        {
            ans = num1 / num2;
            printf("ans is: %f", ans);
        }
        else
        {
            printf("invalid");
            fflush(stdin);
            printf(" \n enter c for reset");
            scanf("%c", &choice);
        }
    }
}