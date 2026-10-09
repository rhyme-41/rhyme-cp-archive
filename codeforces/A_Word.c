#include <stdio.h>
#include <string.h>
#include <ctype.h>
int main()
{
    char str[101];
    scanf("%s", str);
    int check = 0;
    int n = strlen(str);
    for (int i = 0; i < n; i++)
    {
        if (islower(str[i]))
            check++;
        else
            check--;
    }
    if (check >= 0)
    {
        for (int i = 0; i < n; i++)
        {
            str[i] = tolower(str[i]);
        }
    }
    else
    {
        for (int i = 0; i < n; i++)
        {
            str[i] = toupper(str[i]);
        }
    }
    printf("%s", str);
    return 0;
}