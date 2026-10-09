#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int arr[n];
    int freq[1001] = {0};
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
        freq[arr[i]]++;
    }
    int ans = arr[0];
    for (int i = 1; i < n; i++)
    {
        if (freq[arr[i]] > freq[ans])
            ans = arr[i];
    }
    printf("Most frequent number %d\n", ans);
    printf("frequency %d", freq[ans]);
    return 0;
}