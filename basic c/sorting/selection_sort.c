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

    for (int i = 0; i < n - 1; i++)
    {
        int minidx = i;
        for (int j = i + 1; j < n; j++)
        {
            if (arr[minidx] > arr[j])
            {
                minidx = j;
            }
        }
        // swapping 1st and minimum element:
        int temp = arr[i];
        arr[i] = arr[minidx];
        arr[minidx] = temp;
    }

    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }

    return 0;
}

// *************************** OBSERVATION *******************************
// for 'n' elements we need 'n-1' passes
// In each pass we find out the minimum element in the unsorted part
// After every pass the unsorted array reduces by 1 length
// we are using O(n) swaps
// standard selection sort is not stable