// pattern 2,1,3,4,7,11,...
#include <stdio.h>
void main()
{
    int first = 2, second = 1, count = 0;
    printf("%d ", first);
    printf("%d ", second);
    while (second < 1364)
    {
        first = first + second;
        printf("%d ", first);
        second = first + second;
        printf("%d ", second);
        count++;
    }
}