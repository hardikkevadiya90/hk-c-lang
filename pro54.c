// 2,1,3,4,7,11,18,29,...3000
#include <stdio.h>
void main()
{
    int first = 2, second = 1, tamp = 0;
    printf("%d ", first);
    printf("%d ", second);
    // for (tamp = 0; second < 1364; tamp++)
    while(second<1364)
    {   tamp=tamp+1;
        first = first + second; // 3
        printf("%d ", first);
        second = first + second; // 4
        printf("%d ", second);
    }
}