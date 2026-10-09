#include <stdio.h>

int main()
{
    int y;
    scanf("%d", &y);
    y++;
    while (1)
    {
        int n = y;
        int a = n % 10;
        n = n / 10;
        int b = n % 10;
        n = n / 10;
        int c = n % 10;
        n = n / 10;
        if (n != a && n != b && n != c && a != b && a != c && b != c)
        {
            printf("%d", y);
            return 0;
        }
        else
            y++;
    }

    return 0;
}