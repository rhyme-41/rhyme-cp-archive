#include <stdio.h>

int main()
{
    int n;
    int count = 0;
    scanf("%d", &n);
    int arr[2 * n];
    for (int i = 0; i < 2 * n; i++)
    {
        scanf("%d", &arr[i]);
    }
    for (int i = 1; i < 2 * n; i += 2)
    {
        for (int j = 0; j < 2 * n; j += 2)
        {
            if (arr[i] == arr[j])
                count++;
        }
    }
    printf("%d", count);
    return 0;
}