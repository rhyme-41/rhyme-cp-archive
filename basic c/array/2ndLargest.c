// #include <stdio.h>
// #include <limits.h>
// int main()
// {
//     int arr[] = {1, 4, 3, 4, 2, 1};
//     int max = INT_MIN;
//     int smax = INT_MIN;
//     for (int i = 0; i < 6; i++)
//     {
//         if (max < arr[i])
//         {
//             smax = max;
//             max = arr[i];
//         }
//         else if (smax < arr[i] && max != arr[i])
//             smax = arr[i];
//     }

//     printf("%d\n", max);
//     printf("%d\n", smax);
//     return 0;
// }

// *********************better way without initializing smax*******************************

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
    int max = arr[0];
    for (int i = 0; i < n; i++)
    {
        if (max < arr[i])
            max = arr[i];
    }
    int smax, found = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] < max)
        {
            if (!found || arr[i] > smax)
            {
                smax = arr[i];
                found = 1;
            }
        }
    }
    printf("%d\n", max);
    if (found)
        printf("%d", smax);
    else
        printf("2nd max does not exists");

    return 0;
}