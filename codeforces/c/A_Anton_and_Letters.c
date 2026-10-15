#include <stdio.h>

int main()
{
    int freq[256] = {0};
    char ch;
    while (scanf("%c", &ch) == 1 && ch != '}')
    {
        freq[ch]++;
    }
    int count = 0;
    for (int i = 97; i <= 122; i++)
    {
        if (freq[i] >= 1)
            count++;
    }
    printf("%d\n", count);

    return 0;
}