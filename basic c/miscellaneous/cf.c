// #include <stdio.h>
// void print(int *p, int n)
// {
//     for (int i = 0; i < n; i++)
//     {
//         printf("%d ", 2 * p[i]);
//     }
// }
// int main()
// {
//     int arr[] = {6, 2, 4, 3};
//     print(arr, 4);

//     return 0;
// }

// *****************array reverse without using another array*****************

#include <stdio.h>
void reverse(int *a, int n)
{
    int i = 0;
    int j = n - 1;
    while (i < j)
    {
        int temp = a[i];
        a[i] = a[j];
        a[j] = temp;
        i++;
        j--;
    }
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
    reverse(arr, n);
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }

    return 0;
}