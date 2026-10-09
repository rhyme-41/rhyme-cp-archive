#include <stdio.h>
#include <ctype.h>
int main()
{
    int n;
    scanf("%d", &n);
    char str[n + 1];
    scanf("%s", str);
    int flag = 1;
    if (n < 26)
        printf("NO\n");
    else
    {
        for (int i = 0; i < n; i++)
        {
            str[i] = tolower(str[i]);
        }
        int freq[26] = {0};
        for (int i = 0; i < n; i++)
        {
            freq[str[i] - 'a']++;
        }
        for (int i = 0; i < 26; i++)
        {
            if (freq[i] < 1)
                flag = 0;
        }

        if (flag)
            printf("YES\n");
        else
            printf("NO\n");
    }

    return 0;
}