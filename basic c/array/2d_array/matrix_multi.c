#include <stdio.h>
int main()
{

    int r;
    printf("Enter 1st matrix row: ");
    scanf("%d", &r);
    int n;
    printf("Enter 1st matrix column/2nd matrix row: ");
    scanf("%d", &n);
    int c;
    printf("Enter 2nd matrix column: ");
    scanf("%d", &c);

    int a[r][n];
    printf("Enter 1s matrix elements:\n");
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < n; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }

    int b[n][c];
    printf("Enter 2nd matrix elements:\n");
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < c; j++)
        {
            scanf("%d", &b[i][j]);
        }
    }

    int res[r][c];
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            res[i][j] = 0;
            for (int k = 0; k < n; k++)
            {
                res[i][j] += a[i][k] * b[k][j];
            }
        }
    }
    printf("Resultant matrix:\n");
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            printf("%d ", res[i][j]);
        }
        printf("\n");
    }

    return 0;
}