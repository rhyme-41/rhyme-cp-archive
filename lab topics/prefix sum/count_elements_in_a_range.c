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
    int x, y;
    scanf("%d%d", &x, &y);
    int prefix[n];
    if (arr[0] >= x && arr[0] <= y)
        prefix[0] = 1;
    else
        prefix[0] = 0;
    for (int i = 1; i < n; i++)
    {
        if (arr[i] >= x && arr[i] <= y)
            prefix[i] = prefix[i - 1] + 1;
        else
            prefix[i] = prefix[i - 1];
    }
    printf("%d\n", prefix[n - 1]);
    return 0;
}