// structure date
#include <stdio.h>
struct date
{
    int date, month, year;
};
void main()
{
    struct date india, pakistan, japan;
    printf("enter the date of india:");
    scanf("%d",&india.date);
    printf("enter the month of india:");
    scanf("%d",&india.month);
    printf("enter the year of india:");
    scanf("%d",&india.year);
    printf("enter the date of pakistan:");
    scanf("%d",&pakistan.date);
    printf("enter the month of pakistan:");
    scanf("%d",&pakistan.month);
    printf("enter the year of pakistan:");
    scanf("%d",&pakistan.year);
    printf("enter the date of japan:");
    scanf("%d",&japan.date);
    printf("enter the month of japan:");
    scanf("%d",&japan.month);
    printf("enter the year of japan:");
    scanf("%d",&japan.year);
    printf("\nthe date of india is %d.%d.%d", india.date, india.month, india.year);
    printf("\nthe date of pakistan is %d.%d.%d", pakistan.date, pakistan.month, pakistan.year);
    printf("\nthe date of japan is %d.%d.%d", japan.date, japan.month, japan.year);
}
