#include <stdio.h>
int getadd(int num1, int num2)
{
    return num1 + num2;
}
int getsub(int num1, int num2)
{
    return num1 - num2;
}
int getmul(int num1, int num2)
{
    return num1 * num2;
}
int getdiv(int num1, int num2)
{
    return num1 / num2;
}
float getmodule(int num1, int num2)
{
    return num1 % num2;
}
void max(int num1, int num2)
{
    if (num1 > num2)

        printf("num1 is greater");

    else if (num2 > num1)

        printf("num2 is greater");
}
void min(int num1, int num2)
{
    if (num1 < num2)

        printf("num1 is minimum");

    else if (num2 < num1)

        printf("num2 is minimum");
}
void eql(int num1, int num2)
{
    if (num1 == num2)

        printf("both are eql");

    else

        printf("both are not eql");
}
void main()
{
    int num1, num2, option, conti = 1;
    float ans;
    do
    {
        printf("enter num1:");
        scanf("%d", &num1);
        printf("enter num2:");
        scanf("%d", &num2);
        printf("\n enter 1 for add \n enter 2 for sub \n enter 3 for mul \n enter 4 for div \n enter 5 for module \n enter 6 for max \n enter 7 for min \n enter 8 for eql \n enter any option :");
        scanf("%d",& option);
        switch (option)
        {
        case 1:
            ans = getadd(num1, num2);
            printf("the add ans is :%f", ans);

            break;
        case 2:
            ans = getsub(num1, num2);
            printf("the sub ans is:%f", ans);
            break;

        case 3:
            ans = getmul(num1, num2);
            printf("the add ans is :%f", ans);

            break;
        case 4:
            ans = getdiv(num1, num2);
            printf("the sub ans is:%f", ans);
            break;
        case 5:
            ans = getmodule(num1, num2);
            printf("the add ans is :%f", ans);

            break;
        case 6:
            max(num1, num2);

            break;
        case 7:
            min(num1, num2);

            break;
        case 8:
            eql(num1, num2);

            break;
        }
        printf("\n select any one \n 1 for continue \n 2 for exit");
        scanf("%d", &conti);
        if (conti < 1 && conti > 2)
        {
            printf("invalid");
            break;
        }
    } while (conti == 1);
}