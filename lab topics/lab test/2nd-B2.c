#include <stdio.h>
int prime(int x)
{
    if (x < 2)
        return 0;
    for (int i = 2; i * i <= x; i++)
    {
        if (x % i == 0)
            return 0;
    }
    return 1;
}

int main()
{
    int n, k;
    scanf("%d%d", &n, &k);
    char str[n + 1];
    scanf("%s", str);
    int maxlen = -1;
    for (int i = 0; i < n; i++)
    {
        int num = 0;
        for (int j = i; j < n && j - i + 1 <= k; j++)
        {
            num = num * 10 + (str[j] - '0');
            if (prime(num))
            {
                int len = j - i + 1;
                if (maxlen < len)
                    maxlen = len;
            }
        }
    }
    printf("%d", maxlen);
    return 0;
}