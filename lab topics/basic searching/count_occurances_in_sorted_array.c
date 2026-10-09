#include <stdio.h>

int firstoccurance(int arr[], int n, int target)
{
    int l = 0;
    int r = n - 1;
    int found = -1;
    while (l <= r)
    {
        int mid = (r + l) / 2;
        if (arr[mid] == target)
        {
            found = mid;
            r = mid - 1;
        }
        else if (arr[mid] > target)
            r = mid - 1;
        else
            l = mid + 1;
    }
    return found;
}

int lastoccurance(int arr[], int n, int target)
{
    int l = 0;
    int r = n - 1;
    int found = -1;
    while (l <= r)
    {
        int mid = (r + l) / 2;
        if (arr[mid] == target)
        {
            found = mid;
            l = mid + 1;
        }
        else if (arr[mid] > target)
            r = mid - 1;
        else
            l = mid + 1;
    }
    return found;
}

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
    int first = firstoccurance(arr, n, target);
    int last = lastoccurance(arr, n, target);

    if (first == -1)
        printf("0\n");
    else
        printf("%d\n", last - first + 1);
    return 0;
}