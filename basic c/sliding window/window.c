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
    int k;
    scanf("%d", &k);
    int sum = 0;
    for (int i = 0; i < k; i++)
    {
        sum += arr[i];
    }
    int maxsum = sum;
    for (int i = 0; i < n - k; i++)
    {
        sum = sum - arr[i] + arr[k + i];
        if (sum > maxsum)
            maxsum = sum;
    }
    printf("%d\n", maxsum);
    return 0;
}