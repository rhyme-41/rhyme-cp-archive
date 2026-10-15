#include <stdio.h>
#include <string.h>
int main()
{
    char str[101];
    scanf("%s", str);
    int n = strlen(str);
    for (int i = 0; i < n; i += 2)
    {
        for (int j = 0; j < n - i - 2; j += 2)
        {
            if (str[j] > str[j + 2])
            {
                int temp = str[j];
                str[j] = str[j + 2];
                str[j + 2] = temp;
            }
        }
    }
    printf("%s", str);
    return 0;
}