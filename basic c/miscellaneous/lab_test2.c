#include <stdio.h>

int main()
{
    int n, k;
    scanf("%d%d", &n, &k);
    int x = n + k;
    char str[x];
    for (int i = 0; i < n; i++)
    {
        scanf(" %c", &str[i]);
    }
    for (int i = n, j = 0; i < x; i++, j++)
    {
        str[i] = str[j];
    }
    int check = 0, count;
    for (int i = 0; i < n; i++)
    {
        count = 0;
        for (int j = i; j < k + i; j++)
        {
            if (str[i] != str[j + 1])
                count++;
            if (count == k)
            {
                check = 1;
                break;
            }
        }
    }
    if (check)
        printf("YES\n");
    else
        printf("NO\n");
    return 0;
}
