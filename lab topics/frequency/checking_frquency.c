#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    int freq1[1001] = {0};
    int freq2[1001] = {0};
    int x;
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &x);
        freq1[x]++;
    }
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &x);
        freq2[x]++;
    }
    int same = 1;
    for (int i = 0; i < 1001; i++)
    {
        if (freq1[i] != freq2[i])
            same = 0;
    }

    if (same)
        printf("YES\n");
    else
        printf("NO\n");

    return 0;
}