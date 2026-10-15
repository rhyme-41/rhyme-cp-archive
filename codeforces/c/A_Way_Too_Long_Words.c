#include <stdio.h>
#include <string.h>
int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        char str[101];
        scanf("%s", str);
        int x = strlen(str);
        if (x <= 10)
            printf("%s", str);
        else
            printf("%c%d%c", str[0], x - 2, str[x - 1]);
        printf("\n");
    }
    return 0;
}