#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    if (n % 2 == 0)
    {
        for (int i = 0; i < n / 2 - 1; i++)
        {
            printf("I hate that I love that ");
        }
        printf("I hate that I love it ");
    }
    else
    {
        for (int i = 0; i < n / 2; i++)
        {
            printf("I hate that I love that ");
        }
        printf("I hate it ");
    }
    return 0;
}