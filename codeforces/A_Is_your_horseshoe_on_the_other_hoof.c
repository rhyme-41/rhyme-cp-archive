#include <stdio.h>

int main()
{
    int a, b, c, d;
    scanf("%d%d%d%d", &a, &b, &c, &d);
    int count = 0;
    if (a == b || a == c || a == d)
        count++;
    if (b == c || b == d)
        count++;
    if (c == d)
        count++;
    printf("%d", count);
    return 0;
}