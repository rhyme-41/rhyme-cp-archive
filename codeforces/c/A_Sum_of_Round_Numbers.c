#include <stdio.h>
#include <string.h>
int main()
{
    int t;
    scanf("%d", &t);

    while (t--)
    {
        int count = 0;
        char str[6];
        scanf("%s", str);
        int n = strlen(str);
        for (int i = 0; i < n; i++)
        {
            if (str[i] != '0')
                count++;
        }
        printf("%d\n", count);
        for (int i = 0; i < n; i++)
        {
            if (str[i] != '0')
            {
                printf("%c", str[i]);
                for (int j = 0; j < n - i - 1; j++)
                    printf("0");
                printf(" ");
            }
        }
        printf("\n");
    }
    return 0;
}