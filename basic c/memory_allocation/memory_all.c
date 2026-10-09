
#include <stdio.h>
#include <stdlib.h>
// int *swap(int *x)
// {
//     int *t = x;
//     *t = 20;
//     return t;
// }
int main()
{
    //     int a = 10;
    //     int *p = swap(&a);
    //     printf("%p\n", p);
    //     printf("%d", *p);

    int size;
    scanf("%d", &size);
    int *p = (int *)malloc(size * sizeof(int));

    for (int i = 0; i < size; i++)
    {
        scanf("%d", p + i);
    }
    for (int i = 0; i < size; i++)
    {
        printf("%d ", *(p + i));
    }

    free(p);
    return 0;
}