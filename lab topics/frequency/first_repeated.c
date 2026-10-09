#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    int freq[1001] = {0};
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
        freq[arr[i]]++;
    }
    for (int i = 0; i < 1001; i++)
    {
        if (freq[arr[i]] > 1)
        {
            printf("%d", arr[i]);
            return 0;
        }
    }
    printf("no repeat found");
    return 0;
}