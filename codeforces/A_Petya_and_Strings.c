#include <stdio.h>
#include <string.h>
#include <ctype.h>
int main()
{
    char str1[101];
    char str2[101];

    scanf("%s", str1);
    scanf("%s", str2);
    int n = strlen(str1);
    for (int i = 0; i < n; i++)
    {
        str1[i] = tolower(str1[i]);
        str2[i] = tolower(str2[i]);
    }
    int x = strcmp(str1, str2);
    if (x == 0)
        printf("0");
    else if (x < 0)
        printf("-1");
    else
        printf("1");

    return 0;
}