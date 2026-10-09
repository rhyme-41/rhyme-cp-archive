#include <stdio.h>
#include <string.h>
int main()
{
    char str[1000];
    char str1[1000];
    scanf("%s", str);
    scanf("%s", str1);
    int i = 0, j = 0;
    while (i < strlen(str) && j < strlen(str1))
    {
        if (str[i] == str1[j])
            j++;
        i++;
    }
    if (j == strlen(str1))
        printf("YES\n");
    else
        printf("NO\n");
    return 0;
}