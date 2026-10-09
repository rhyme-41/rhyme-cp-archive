#include <stdio.h>

int main()
{
    int n, sum = 0;
    scanf("%d", &n);
    while (n--)
    {
        char a, b, c;
        scanf(" %c%c%c", &a, &b, &c);
        if (b == '+')
            sum++;
        else
            sum--;
    }
    printf("%d", sum);
    return 0;
}