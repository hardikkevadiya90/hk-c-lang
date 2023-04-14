// structure
#include <stdio.h>
#include <stdlib.h>
struct time
{
    int hours, minutes, seconds;
    char name;
};

void main()
{
    struct time america, india, china;
    printf("enter the america hours:");
    scanf("%d", &america.hours);
    printf("enter the america minutes:");
    scanf("%d", &america.minutes);
    printf("enter the america seconds:");
    scanf("%d", &america.seconds);
    printf("enter the country first latter :");
    fflush(stdin);
    scanf("%c", &america.name);
    printf("enter the india hours:");
    scanf("%d", &india.hours);
    printf("enter the india minutes:");
    scanf("%d", &india.minutes);
    printf("enter the india seconds:");
    scanf("%d", &india.seconds);
    printf("enter the country first latter :");
    fflush(stdin);
    scanf("%c", &india.name);
    printf("enter the china hours:");
    scanf("%d", &china.hours);
    printf("enter the china minutes:");
    scanf("%d", &china.minutes);
    printf("enter the china seconds:");
    scanf("%d", &china.seconds);
    printf("enter the country first latter :");
    fflush(stdin);
    scanf("%c", &china.name);
    printf("time of america is %d:%d:%d and \nfirst latter of country is %c", america.hours, america.minutes, america.seconds, america.name);
    printf("\ntime of india is %d:%d:%d and \nfirst latter of country is %c", india.hours, india.minutes, india.seconds, india.name);
    printf("\ntime of china is %d:%d:%d and \nfirst latter of country is %c", china.hours, china.minutes, china.seconds, china.name);
}
