#include <stdio.h>
#include <string.h>
int main()
{
    char s1[101];
    char s2[101];
    scanf("%s", s1);
    scanf("%s", s2);
    int n = strlen(s1);
    for (int i = 0; i < n; i++)
    {
        if (s1[i] == s2[i])
            s1[i] = '0';
        else
            s1[i] = '1';
    }
    printf("%s", s1);
    return 0;
}