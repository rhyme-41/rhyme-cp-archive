#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    double sum = 0;
    for (int i = 0; i < n; i++)
    {
        double x;
        scanf("%lf", &x);
        sum += x;
    }
    double y = sum / n;
    printf("%.12f", y);
    return 0;
}