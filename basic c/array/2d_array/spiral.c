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
    int minr = 0, maxr = r - 1, minc = 0, maxc = c - 1, count = 0, tc = r * c;
    while (count < tc)
    {
        for (int j = minc; j <= maxc && count < tc; j++)
        {
            printf("%d ", a[minr][j]);
            count++;
            if (count >= tc)
                break;
        }
        if (count >= tc)
            break;
        minr++;
        for (int i = minr; i <= maxr && count < tc; i++)
        {
            printf("%d ", a[i][maxc]);
            count++;
        }

        maxc--;
        for (int j = maxc; j >= minc && count < tc; j--)
        {
            printf("%d ", a[maxr][j]);
            count++;
        }

        maxr--;
        for (int i = maxr; i >= minr && count < tc; i--)
        {
            printf("%d ", a[i][minc]);
            count++;
        }

        minc++;
    }
    return 0;
}