#include <stdio.h>

int main()
{
    int n, h;
    scanf("%d%d", &n, &h);
    int arr[n];
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
        if (arr[i] <= h)
            count++;
        else
            count += 2;
    }
    printf("%d", count);

    return 0;
}