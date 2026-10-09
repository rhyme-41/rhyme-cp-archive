#include <stdio.h>
#define pi 3.141592653589793
#define area(r) (pi * r * r)
int main()
{
    int n;
    printf("enter radius of a circle: ");
    scanf("%d", &n);
    printf("area is: %.3f", area(n));
    return 0;
}