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

    for (int i = 1; i <= n - 1; i++)
    {
        int j = i;
        while (j > 0 && arr[j] < arr[j - 1])
        {
            int temp = arr[j - 1];
            arr[j - 1] = arr[j];
            arr[j] = temp;
            j--;
        }
    }
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    return 0;
}

// *************************** OBSERVATION *********************************

// for 'n' elements we need 'n-1' passes
// Take the current element and move it left until it reaches its correct position in the sorted part.
// swap happens only when the element is smaller than its left element
// for best case time complexity= O(n)
// for worst case time complexity= O(n^2)
// insertion sort is stable