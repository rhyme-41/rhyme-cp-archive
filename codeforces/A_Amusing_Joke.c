#include <stdio.h>

int main()
{
    int flag = 1;
    char s1[101];
    scanf("%s", s1);
    char s2[101];
    scanf("%s", s2);
    char s3[101];
    scanf("%s", s3);
    int f1[26] = {0};
    int f2[26] = {0};
    for (int i = 0; s1[i] != '\0'; i++)
    {
        f1[s1[i] - 'A']++;
    }
    for (int i = 0; s2[i] != '\0'; i++)
    {
        f1[s2[i] - 'A']++;
    }
    for (int i = 0; s3[i] != '\0'; i++)
    {
        f2[s3[i] - 'A']++;
    }
    for (int i = 0; i < 26; i++)
    {
        if (f1[i] != f2[i])
        {
            flag = 0;
            break;
        }
    }
    if (flag)
        printf("YES\n");
    else
        printf("NO\n");
    return 0;
}