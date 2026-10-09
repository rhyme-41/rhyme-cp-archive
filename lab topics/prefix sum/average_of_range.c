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
    int prefix[n];
    prefix[0] = arr[0];
    for (int i = 1; i < n; i++)
    {
        prefix[i] = prefix[i - 1] + arr[i];
    }
    int l, r;
    scanf("%d%d", &l, &r);
    int count = r - l + 1;
    int sum = (l == 0) ? prefix[r] : prefix[r] - prefix[l - 1];
    double avg = (double)sum / count;
    printf("%.2lf", avg);
    return 0;
}