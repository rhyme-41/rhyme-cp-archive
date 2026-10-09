#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    int x;
    int freq[1001] = {0};
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &x);
        freq[x]++;
    }
    for (int i = 0; i < 1001; i++)
    {
        if (freq[i] > 1)
            printf("%d ", i);
    }
    return 0;
}