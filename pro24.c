#include <stdio.h>
void main()
{
    int count = 0, flash = 9, tamp = 1;
    while (flash > 0)
    {
        while (flash > count)
        {
            printf("%d", tamp);
            count++;
        }
        printf("\n");
        count = 0;
        flash--;
        tamp++;
    }
}