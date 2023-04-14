#include <stdio.h>
void main()
{
    int num = 0;
    printf("%d", num);
    while (num < 1000)
    {
        num = num + 2;
        printf("%d ", num);
    }
}