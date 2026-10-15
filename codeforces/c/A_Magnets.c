#include <stdio.h>

int main()
{
    int t;
    scanf("%d", &t);
    int count = 1;
    int k;
    scanf("%d", &k);
    t--;
    while (t--)
    {
        int x;
        scanf("%d", &x);
        if (x != k)
            count++;
        k = x;
    }
    printf("%d", count);
    return 0;
}