#include <stdio.h>

int main()
{
    int t;
    scanf("%d", &t);
    int sum = 0;
    int max = 0;
    while (t--)
    {
        int n, k;
        scanf("%d%d", &n, &k);
        sum += k - n;
        if (max < sum)
            max = sum;
    }
    printf("%d", max);
    return 0;
}