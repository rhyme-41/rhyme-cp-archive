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
    int max = 0;
    int min = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[max] < arr[i])
            max = i;
    }
    for (int i = 0; i < n; i++)
    {
        if (arr[min] >= arr[i])
            min = i;
    }
    if (min < max)
        printf("%d\n", max + n - 1 - min - 1);
    else
        printf("%d\n", max + n - 1 - min);
    return 0;
}