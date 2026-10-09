#include <stdio.h>
int prime(int x)
{
    int r = 1;
    for (int i = 2; i < x; i++)
    {
        if (x % i == 0)
            r = 0;
    }
    return r;
}
int main()
{
    int n;
    scanf("%d", &n);
    for (int i = 2; i <= n; i++)
    {
        if (n % i == 0)
        {
            if (prime(i))
            {
                printf("%d ", i);
            }
        }
    }
    return 0;
}