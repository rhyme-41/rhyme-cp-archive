#include <stdio.h>

int main()
{
    int n, k;
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    scanf("%d", &k);
    int maxlen = 0;
    for (int i = 0; i < n; i++)
    {
        int sum = 0;
        for (int j = i; j < n; j++)
        {
            sum += arr[j];
            if (sum == k)
            {
                int len = j - i + 1;
                if (maxlen < len)
                    maxlen = len;
            }
        }
    }
    printf("%d", maxlen);
    return 0;
}