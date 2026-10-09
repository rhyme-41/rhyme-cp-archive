#include <stdio.h>
#include <string.h>
int main()
{
    char str[101];
    scanf("%s", str);
    int n = strlen(str);
    int freq[130] = {0};

    for (int i = 0; i < n; i++)
    {
        freq[str[i]]++;
    }
    int count = 0;
    for (int i = 0; i < 130; i++)
    {
        if (freq[i] != 0)
            count++;
    }
    if (count % 2 == 0)
        printf("CHAT WITH HER!");
    else
        printf("IGNORE HIM!");
    return 0;
}