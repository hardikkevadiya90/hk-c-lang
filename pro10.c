#include <stdio.h>
void main()
{
    int a, b, ans, option;
    printf("enter the value of a: ");
    scanf("%d", &a);
    printf("enter the value of b: ");
    scanf("%d", &b);
    printf("\n enter 1 for add");
    printf("\n enter 2 for sub");
    printf("\n enter 3 for mult");
    printf("\n enter 4 for div");
    printf("\n select any option");
    scanf("%d",&option);
    if (option == 1)
    {
        ans = a + b;
        printf("the ans is :%d", ans);
    }
    else if (option == 2)
    {
        ans = a - b;
        printf("the ans is: %d", ans);
    }
    else if (option == 3)
    {
        ans = a * b;
        printf("the ans is: %d", ans);
    }
    else if (option == 4)
    {
        ans = a / b;
        printf("the ans is: %d", ans);
    }
}