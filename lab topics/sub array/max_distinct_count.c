#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    int maxdistinct = 0;
    for (int i = 0; i < n; i++)
    {
        int freq[1001] = {0};
        int distinct = 0;
        for (int j = i; j < n; j++)
        {
            if (freq[arr[j]] == 0)
                distinct++;

            freq[arr[j]]++;

            if (maxdistinct < distinct)
                maxdistinct = distinct;
        }
    }
    printf("%d", maxdistinct);
    return 0;
}