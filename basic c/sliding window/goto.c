#include <stdio.h>
int main()
{
    //     int i = 1;
    // start:
    //     printf("%d\n", i);
    //     i++;
    //     if (i <= 10)
    //         goto start;
    int x;
    scanf("%d", &x);
    if (x == 1)
        goto u;
    else
        goto d;
u:
    printf("hello\n");
    return 0;
d:
    printf("bro\n");
    return 0;
}