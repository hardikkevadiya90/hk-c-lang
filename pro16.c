#include <stdio.h>
void main()
{
    int option, sun = 1391400, distance;
    printf("enter 1 for mercury: \n enter 2 for venus: \n enter 3 for earth:\n enter 4 for mars: \n enter 5 for jupiter: \n enter 6 for saturn: \n enter 7 for uranus: \n enter 8 for neptune:");
    scanf("%d", &option);
    switch (option)
    {
    case 1:
        distance = 57900000 - sun;
        printf("mercury distance:%d", distance);
        break;
    case 2:
        distance = 108200000 - sun;
        printf("venus distance:%d", distance);
        break;

    case 3:
        distance = 149600000 - sun;
        printf("earth distance:%d", distance);
        break;

    case 4:
        distance = 227900000 - sun;
        printf("mars distance:%d", distance);
        break;

    case 5:
        distance = 778600000 - sun;
        printf("jupiter distance:%d", distance);
        break;

    case 6:
        distance = 1433500000 - sun;
        printf("saturn distance:%d", distance);
        break;

    case 7:
        distance = 2872500000 - sun;
        printf("uranus distance:%d", distance);
        break;

    case 8:
        distance = 4495100000 - sun;
        printf("neptune distance:%d", distance);
        break;

    default:
        break;
    }
}