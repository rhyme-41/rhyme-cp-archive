#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);

    int freq[n + 1];
    for (int i = 0; i <= n; i++)
    {
        freq[i] = 0;
    }
    int x;
    for (int i = 0; i < n - 2; i++)
    {
        scanf("%d", &x);
        freq[x]++;
    }

    for (int i = 1; i <= n; i++)
    {
        if (freq[i] == 0)
            printf("%d ", i);
    }

    return 0;
}