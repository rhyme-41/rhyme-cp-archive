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
    printf("\n");

    for (int j = 0; j < c; j++)
    {
        if (j % 2 != 0)
        {
            for (int i = 0; i < r; i++)
            {
                printf("%d ", a[i][j]);
            }
        }
        else
        {
            for (int i = r - 1; i >= 0; i--)
            {
                printf("%d ", a[i][j]);
            }
        }
    }
    return 0;
}