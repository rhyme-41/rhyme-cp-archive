#include <stdio.h>

int main()
{
    int n, t;
    scanf("%d%d", &n, &t);
    char str[n + 1];
    scanf("%s", str);
    while (t--)
    {
        for (int i = 0; i < n; i++)
        {
            if (str[i] == 'B' && str[i + 1] == 'G')
            {
                int temp = str[i];
                str[i] = str[i + 1];
                str[i + 1] = temp;
                i++;
            }
        }
    }
    printf("%s", str);
    return 0;
}