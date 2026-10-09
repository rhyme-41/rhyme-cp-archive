#include <stdio.h>
#include <limits.h>
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
    int maxsumrow = INT_MIN, maxrow = 0;
    for (int i = 0; i < r; i++)
    {
        int rowsum = 0;
        for (int j = 0; j < c; j++)
        {
            rowsum += a[i][j];
        }
        if (maxsumrow < rowsum)
        {
            maxsumrow = rowsum;
            maxrow = i;
        }
    }
    printf("Row number having maximum sum is %d and the sum is %d ", maxrow, maxsumrow);
}