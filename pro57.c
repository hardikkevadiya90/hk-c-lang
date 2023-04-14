#include <stdio.h>
#include <stdlib.h>
#include <string.h>
struct time
{
    int hours;
    float minute_second;
    char name[25];
};
void main()
{
    struct time country[3];
    int count=0;
    // for (count = 0; count < 3; count++)
    while(count<3)
    {
        printf("enter the hours of country %d:", count + 1);
        scanf("%d", &country[count].hours);
        printf("enter the minutes_second of country %d:", count + 1);
        scanf("%f", &country[count].minute_second);
        fflush(stdin);
        printf("enter the name of  country %d:", count + 1);
        scanf("%s", &country[count].name);
        count=count+1;
    }count=0;
    // for (count = 0; count < 3; count++)
    while(count<3)
    {   
        printf("\n  time of country %d  hours: %d minutes_second %.2f :name: %s", count + 1, country[count].hours, country[count].minute_second, country[count].name);
        count=count+1;
    }
}