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
    int l, r;
    scanf("%d%d", &l, &r);
    if (l == 0)
        printf("%d\n", prefix[r]);
    else
        printf("%d\n", prefix[r] - prefix[l - 1]);
    return 0;
}