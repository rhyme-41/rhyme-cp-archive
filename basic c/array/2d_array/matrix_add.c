#include <stdio.h>
int main()
{
    int r;
    printf("Enter row: ");
    scanf("%d", &r);
    int c;
    printf("Enter column: ");
    scanf("%d", &c);

    printf("Enter array 1:\n");
    int a[r][c];

    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }
    printf("Enter array 2:\n");
    int b[r][c];

    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            scanf("%d", &b[i][j]);
        }
    }
    printf("The result is:\n");
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            printf("%d ", a[i][j] + b[i][j]);
        }
        printf("\n");
    }
    return 0;
}