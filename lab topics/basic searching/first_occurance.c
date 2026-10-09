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
    int target;
    scanf("%d", &target);
    int l = 0;
    int r = n - 1;
    int found = -1;
    while (l <= r)
    {
        int mid = (l + r) / 2;
        if (target == arr[mid])
        {
            found = mid;
            r = mid - 1;
        }

        else if (target > arr[mid])
            l = mid + 1;
        else
            r = mid - 1;
    }
    printf("%d", found);

    return 0;
}