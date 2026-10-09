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
    int longest = 0, length = 1;
    for (int i = 1; i < n; i++)
    {
        if (arr[i] > arr[i - 1])
            length++;
        else
            length = 1;
        if (longest < length)
            longest = length;
    }
    printf("%d", longest);
    return 0;
}