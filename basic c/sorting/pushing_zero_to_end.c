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

    // ************************* using another array *************************

    // int ans[n];
    // int idx=0;
    // for (int i = 0; i < n; i++)
    // {
    //     if(arr[i]!=0){
    //         ans[idx]=arr[i];
    //         idx++;
    //     }
    // }
    // for(int i=idx;i<n;i++){
    //     ans[i]=0;
    // }
    // for (int i = 0; i < n; i++)
    // {
    //     printf("%d ",ans[i]);
    // }

    // ************************without using another array***********************

    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - 1 - i; j++)
        {
            if (arr[j] == 0)
            {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }

    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }

    return 0;
}