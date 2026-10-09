// Topic: malloc, calloc, free, realloc

#include <stdio.h>
#include <stdlib.h>
int main()
{
    // ********************use of malloc*****************************

    // int size;
    // scanf("%d", &size);
    // int *ptr;
    // ptr = (int *)malloc(size * sizeof(int));
    // int *start = ptr;
    // for (int i = 0; i < size; i++)
    // {
    //     scanf("%d", &(*ptr));
    //     ptr++;
    // }
    // ptr=start;
    // for (int i = 0; i < size; i++)
    // {
    //     printf("%d ", *(ptr));
    //     ptr++;
    // }
    // free(start);

    // ****************** Difference between malloc and calloc ******************************

    // int *a = (int *)malloc(10 * sizeof(int));
    // for (int i = 0; i < 10; i++)
    // {
    //     printf("%d ", *(a + i)); // this will print garbage value
    // }

    // printf("\n");

    // int *b = (int *)calloc(10, sizeof(int));
    // for (int i = 0; i < 10; i++)
    // {
    //     printf("%d ", *(b + i)); // this will print 0 as calloc initialize each slot with 0
    // }
    // free(a);
    // free(b);

    // ********************* uses of realloc ********************

    int *p = (int *)malloc(10 * sizeof(int));
    printf("before %p\n", p);
    for (int i = 0; i < 10; i++)
    {
        p[i] = i + 1;
    }
    int *t = realloc(p, 16 * sizeof(int)); // increases or decreases the size of allocated memory and may move it to a new address

    if (t != NULL)
    {
        p = t;
    }

    for (int i = 10; i < 16; i++)
    {
        p[i] = i + 2;
    }
    printf("after %p\n", p);
    for (int i = 0; i < 16; i++)
    {
        printf("%d ", p[i]);
    }
    free(p);
    return 0;
}