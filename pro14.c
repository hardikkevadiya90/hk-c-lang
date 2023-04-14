#include <stdio.h>
void main()
{
    int n1 = 50,option;
    float n2 = 20.46, ans;
    printf("select option 1 for add \nselect option 2 for sub \nselect option 3 for mul \nselect option 4 for div");
    scanf("%d", &option);
    switch (option)
    {
    case 1:
        ans = n1 + n2;
        printf("ans of add is:%f", ans);
        break;
    case 2:
        ans = n1 - n2;
        printf("ans of sub is:%f", ans);
        break;
    case 3:
        ans = n1 * n2;
        printf("ans of mul is:%f", ans);
        break;
    case 4:
        ans = n1 / n2;
        printf("ans of div is:%f", ans);
        break;

    default:
        printf("invalid");
        break;
    }
}