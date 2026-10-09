#include <stdio.h>
int main()
{
    int r;
    printf("Enter row: ");
    scanf("%d", &r);
    int c;
    printf("Enter column: ");
    scanf("%d", &c);
    int a[r][c];
    printf("Enter elements:\n");
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }

    for (int i = 0; i < r; i++)
    {
        if (i % 2 == 0)
        {
            for (int j = 0; j < c; j++)
            {
                printf("%d ", a[i][j]);
            }
        }
        else
        {
            for (int j = c - 1; j >= 0; j--)
            {
                printf("%d ", a[i][j]);
            }
        }
    }
    return 0;
}