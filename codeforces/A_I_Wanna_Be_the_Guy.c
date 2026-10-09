#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    int freq[101] = {0};
    int p;
    scanf("%d", &p);
    for (int i = 1; i <= p; i++)
    {
        int x;
        scanf("%d", &x);
        freq[x]++;
    }
    int q;
    scanf("%d", &q);
    for (int i = 1; i <= q; i++)
    {
        int x;
        scanf("%d", &x);
        freq[x]++;
    }
    int flag = 1;
    for (int i = 1; i <= n; i++)
    {
        if (freq[i] < 1)
        {
            flag = 0;
            break;
        }
    }
    if (flag)
        printf("I become the guy.\n");
    else
        printf("Oh, my keyboard!\n");
    return 0;
}