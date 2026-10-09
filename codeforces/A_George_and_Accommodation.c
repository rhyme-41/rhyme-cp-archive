#include <stdio.h>

int main()
{
    int t;
    scanf("%d", &t);
    int count = 0;
    while (t--)
    {
        int a, b;
        scanf("%d%d", &a, &b);
        if (b - a > 1)
            count++;
    }
    printf("%d", count);
    return 0;
}