#include <stdio.h>
int main()
{
    int n;
    printf("enter array size: ");
    scanf("%d", &n);
    int arr[n];
    printf("enter array elements: ");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    int target;
    printf("enter target value:");
    scanf("%d", &target);
    int i = 0;
    int j = n - 1;
    while (i < j)
    {
        if (arr[i] + arr[j] == target)
        {
            printf("%d %d", arr[i], arr[j]);
            return 0;
        }
        else if (arr[i] + arr[j] > target)
            j--;
        else if (arr[i] + arr[j] < target)
            i++;
    }
    printf("not found");
}