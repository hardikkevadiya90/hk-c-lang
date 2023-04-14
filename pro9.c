#include <stdio.h>
void main()
{
    int unit, price, bill;
    printf("enter the unit: ");
    scanf("%d", &unit);
    if (unit <= 100)
        printf("unit is below 100 so bill is  :%d", bill = unit * 1);
    else if (unit <=200 && unit > 100)
        printf("unit is between 100&200 so bill is  :%d", bill = unit * 2);
    else if (unit <= 300 && unit > 200)
        printf("unit is between 200&300 so bill is  :%d", bill = unit * 3);
    else if (unit <= 400 && unit > 300)
        printf("unit is between 300&400 so bill is  :%d", bill = unit * 4);
    else if (unit <= 500 && unit > 400)
        printf("unit is between 400&500 so bill is  :%d", bill = unit * 5);
}