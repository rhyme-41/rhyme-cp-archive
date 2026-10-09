#include <stdio.h>
#include <stdbool.h>
int main()
{
    int n;
    scanf("%d", &n);
    int a[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    for (int i = 0; i < n; i++)
    {
        bool x = false;
        for (int j = i + 1; j < n; j++)
        {
            if (a[i] == a[j])
            {
                x = true;
            }
        }
        if (x == false)
        {
            printf("%d ", a[i]);
            break;
        }
    }
}