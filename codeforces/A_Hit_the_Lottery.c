#include <stdio.h>
int num(int n)
{
    if (n == 0)
        return 0;
    else if (n == 1 || n == 5 || n == 10 || n == 20 || n == 100)
        return 1;
    else if (n > 1 && n < 5)
        return n;
    else if (n > 100)
    {
        int x = n / 100;
        n = n % 100;
        return x + num(n);
    }
    else if (n > 20)
    {
        int x = n / 20;
        n = n % 20;
        return x + num(n);
    }
    else if (n > 10)
    {
        int x = n / 10;
        n = n % 10;
        return x + num(n);
    }
    else if (n > 5)
    {
        int x = n / 5;
        n = n % 5;
        return x + num(n);
    }
}

int main()
{
    int n;
    scanf("%d", &n);
    printf("%d\n", num(n));
    return 0;
}