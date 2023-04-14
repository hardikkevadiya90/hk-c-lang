// factorial number
#include <stdio.h>
void main()
{
    int number, ans, tamp;
    printf("enter the number :");
    scanf("%d", &number);
    ans = number * (number - 1);
    tamp = number - 2;
    if (number < 0)
    {
        printf("invalid");
    }
    else
    {
        if (number == 2)
        {
            printf("%d", number);
        }
        else
        {
            do
            {
                ans = ans * tamp;
                tamp--;
            } while (tamp > 1);
            printf("the value is:%d", ans);
        }
    }
}
