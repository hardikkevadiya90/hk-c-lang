#include <stdio.h>
void main()
{
    int base, power, exponent, count;
    printf("enter the base:");
    scanf("%d", &base);
    printf("enter the power:");
    scanf("%d", &power);
    if (power > 1)
    {
        exponent = base * base;
        count = 2;
        while (count < power)
        {
            exponent = exponent * base;
            count++;
        }
        printf("%d", exponent);
    }
    else if (power == 1)
    {
        printf("%d", base);
    }
    else
    {
        printf("invalid");
    }
}