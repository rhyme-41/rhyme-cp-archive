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

    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }
    int max = a[0][0];
    int ind1 = 0, ind2 = 0;
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            if (max < a[i][j])
            {
                max = a[i][j];
                ind1 = i;
                ind2 = j;
            }
        }
    }
    printf("maximum value = %d and index is (%d , %d)", max, ind1, ind2);
}