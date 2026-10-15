#include <stdio.h>

int main()
{
    int max = 0, min = 101;
    for (int i = 0; i < 3; i++)
    {
        int x;
        scanf("%d", &x);
        if (max < x)
            max = x;
        if (min > x)
            min = x;
    }
    printf("%d", max - min);

    return 0;
}