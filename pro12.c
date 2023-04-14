#include <stdio.h>
void main()
{
    int number, first, second;
    printf("enter the number: ");
    scanf("%d", &number);
    first = number / 10;
    second = number % 10;
    if (first == 1)
    {
        printf("one");
    }
    else if (first == 2)
    {
        printf("two");
    }
    else if (first == 3)
    {
        printf("three");
    }
    else if (first == 4)
    {
        printf("four");
    }
    else if (first == 5)
    {
        printf("five");
    }
    else if (first == 6)
    {
        printf("six");
    }
    else if (first == 7)
    {
        printf("seven");
    }
    else if (first == 8)
    {
        printf("first");
    }
    else if (first == 9)
    {
        printf("nine");
    }
    else if (first == 0)
    {
        printf("zero");
    }
    if (second == 1)
    {
        printf("one");
    }
    else if (second == 2)
    {
        printf("two");
    }
    else if (second == 3)
    {
        printf("three");
    }
    else if (second == 4)
    {
        printf("four");
    }
    else if (second == 5)
    {
        printf("five");
    }
    else if (second == 6)
    {
        printf("six");
    }
    else if (second == 7)
    {
        printf("seven");
    }
    else if (second == 8)
    {
        printf("eight");
    }
    else if (second == 9)
    {
        printf("nine");
    }
    else if (second == 0)
    {
        printf("zero");
    }
    else
    {
        printf("invalid");
    }
}