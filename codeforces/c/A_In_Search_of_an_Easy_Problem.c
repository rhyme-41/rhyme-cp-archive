#include <stdio.h>

int main()
{
    int t;
    scanf("%d", &t);
    int check = 0;
    while (t--)
    {
        int a;
        scanf("%d", &a);
        if (a == 1)
        {
            check = 1;
            break;
        }
    }
    if (check == 0)
        printf("EASY");
    else
        printf("HARD");
    return 0;
}