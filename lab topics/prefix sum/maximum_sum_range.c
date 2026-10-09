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
    int prefix[n];
    prefix[0] = arr[0];
    for (int i = 1; i < n; i++)
    {
        prefix[i] = prefix[i - 1] + arr[i];
    }
    int maxsum = arr[0];
    for (int l = 0; l < n; l++)
    {
        for (int r = l; r < n; r++)
        {
            int sum = 0;
            if (l == 0)
                sum = prefix[r];
            else
                sum = prefix[r] - prefix[l - 1];
            if (maxsum < sum)
                maxsum = sum;
        }
    }
    printf("%d\n", maxsum);
    return 0;
}