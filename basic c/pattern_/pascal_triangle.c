#include <stdio.h>
int factorial(int n)
{
    int fact = 1;
    for (int i = 2; i <= n; i++)
    {
        fact = fact * i;
    }
    return fact;
}
int combination(int x, int y)
{
    int comb = factorial(x) / (factorial(y) * factorial(x - y));
    return comb;
}
int main()
{
    int n;
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n - i; j++)
        {
            printf(" ");
        }
        for (int j = 0; j <= i; j++)
        {
            int ncr = combination(i, j);
            printf("%d ", ncr);
        }
        printf("\n");
    }
    return 0;
}