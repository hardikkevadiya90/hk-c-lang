#include <stdio.h>
void main()
{
    char name[6];
    int count = 0, copy;

    printf("enter your name");
    for (count = 0; count < 6; count++)
    {
        scanf("%c", &name[count]);
        if (name[count] == '\n')
        {
            break;
        }
    }
    copy = count;
    printf("\n your name is \n");
    for (count = 0; count <= copy; count++)
    {
        printf("%c", name[count]);
    }
}