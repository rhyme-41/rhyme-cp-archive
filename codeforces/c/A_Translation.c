#include <stdio.h>
#include <string.h>
#include <stdbool.h>
int main()
{
    char str1[101];
    scanf("%s", str1);
    char str2[101];
    scanf("%s", str2);
    bool flag = true;
    int n = strlen(str1);
    int x = strlen(str2);
    if (n != x)
        flag = false;
    for (int i = 0; i < n; i++)
    {
        if (str1[i] != str2[n - i - 1])
            flag = false;
    }
    if (flag)
        printf("YES");
    else
        printf("NO");
    return 0;
}