#include <stdio.h>
#include <stdlib.h>
int min(int x, int y)
{
    if (x <= y)
        return x;
    else
        return y;
}
int main()
{
    int a, b, k = 1;
    scanf("%d%d", &a, &b);
    a = abs(a);
    b = abs(b);
    for (int i = min(a, b); i >= 1; i--)
    {
        if (a % i == 0 && b % i == 0)
        {
            k = i;
            break;
        }
    }
    printf("%d", k);
    return 0;
}