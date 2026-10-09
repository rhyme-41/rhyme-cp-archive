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

    // *************** sorting in ascending order ******************************

    // for (int i = 0; i < n - 1; i++)
    // {
    //     bool flag = true;
    //     for (int j = 0; j < n - 1 - i; j++)
    //     {
    //         if (arr[j] > arr[j + 1])
    //         {
    //             int temp = arr[j];
    //             arr[j] = arr[j + 1];
    //             arr[j + 1] = temp;
    //             flag = false;
    //         }
    //     }
    //     if (flag == true)
    //         break;
    // }

    // ******************** sorting in descending order ******************************

    for (int i = 0; i < n - 1; i++)
    {
        bool flag = true;
        for (int j = 0; j < n - 1 - i; j++)
        {
            if (arr[j] < arr[j + 1])
            {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
                flag = false;
            }
        }
        if (flag == true)
            break;
    }

    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }

    return 0;
}

// *************************** OBSERVATION ********************************
// for best case time complexity= O(n) and space complexity = O(1){no extra space used}
// for average case time complexity= O(n^2) and space complexity = O(1){no extra space used}
// for worst case time complexity= O(n^2) and space complexity = O(1){no extra space used}
// max number of swap needed to sort the array is 1+2+...+ n-1 or {n*(n-1)}/2 or O(n^2)
// bubble sort is stable
// for 'n' elements we need 'n-1' passes