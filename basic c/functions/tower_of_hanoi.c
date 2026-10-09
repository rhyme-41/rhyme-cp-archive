#include <stdio.h>

void toh(int n, char s, char a, char d)
{
    if (n <= 0)
        return;
    toh(n - 1, s, d, a);
    printf("%c ---> %c\n", s, d);
    toh(n - 1, a, s, d);
}

int main()
{
    int disc;
    scanf("%d", &disc);
    toh(disc, 'a', 'b', 'c');
    return 0;
}