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
    int count = 0;
    for (int i = 0; i < 1001; i++)
    {
        if (freq[i] > 0)
            count++;
    }
    printf("%d\n", count);
    return 0;
}