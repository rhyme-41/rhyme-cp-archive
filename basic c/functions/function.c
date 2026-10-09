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
    int a, b;
    scanf("%d%d", &a, &b);
    int p = factorial(a);
    printf("factorial of 1st number is: %d\n", p);
    int t = combination(a, b);
    printf("combination of (a,b) is: %d", t);
    return 0;
}