// #include <stdio.h>
// int main()
// {
//     int n;
//     scanf("%d", &n);
//     int arr[n];
//     for (int i = 0; i < n; i++)
//     {
//         scanf("%d", &arr[i]);
//     }
//     int index = n - 1, ans = n - 1, count = 0;
//     for (int i = 0; i < n - 1; i++)
//     {
//         for (int j = i + 1; j < n; j++)
//         {
//             if (arr[i] == arr[j])
//             {
//                 index = j;
//                 count++;
//             }
//             if (index < ans)
//                 ans = index;
//         }
//     }
//     if (count)
//         printf("%d", arr[ans]);
//     else
//         printf("-1");
//     return 0;
// }

// *********************better approach ********************************

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
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < i; j++)
        {
            if (arr[i] == arr[j])
            {
                printf("%d", arr[i]);
                return 0;
            }
        }
    }
    printf("-1");
}