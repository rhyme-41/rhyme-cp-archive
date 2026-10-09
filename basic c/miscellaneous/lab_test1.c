#include <stdio.h>
int main()
{
    int n, k;
    scanf("%d%d", &n, &k);
    int skill[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &skill[i]);
    }
    int diff, ans = 0, count = 0, max, min;
    for (int i = 0; i < n; i++)
    {
        max = skill[i], min = skill[i];
        for (int j = i; j < n; j++)
        {
            if (skill[j] > max)
                max = skill[j];
            if (skill[j] < min)
                min = skill[j];
            diff = max - min;
            if (diff <= k)
            {
                count = j - i + 1;
                if (ans < count)
                    ans = count;
            }
            else
            {
                break;
            }
        }
    }
    printf("%d", ans);

    return 0;
}