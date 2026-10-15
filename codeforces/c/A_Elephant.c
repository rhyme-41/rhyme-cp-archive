#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    int x = (n % 5 == 0) ? n / 5 : n / 5 + 1;
    printf("%d", x);
    return 0;
}