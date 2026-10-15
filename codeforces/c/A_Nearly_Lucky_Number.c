#include <stdio.h>

int main()
{
    long long n;
    scanf("%lld", &n);
    int digit = 0;
    while (n != 0)
    {
        if (n % 10 == 4 || n % 10 == 7)
            digit++;
        n = n / 10;
    }
    if (digit == 7 || digit == 4)
        printf("YES");
    else
        printf("NO");
    return 0;
}