#include <stdio.h>
int main()
{
    int row, col;
    printf("Enter row:\n");
    scanf("%d", &row);
    printf("Enter column:\n");
    scanf("%d", &col);
    for (int i = 1; i <= row; i++)
    {

        for (int j = 1; j <= i - 1; j++)
        {
            printf(" ");
        }
        for (int k = 1; k <= col; k++)
        {
            printf("* ");
        }

        printf("\n");
    }
    return 0;
}
