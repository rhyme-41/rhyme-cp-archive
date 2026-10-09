#include <stdio.h>
int main()
{
    int row;
    scanf("%d", &row);
    for (int i = 1; i <= row; i++)
    {
        if (i == 1 || i == row)
        {
            for (int j = 1; j <= row; j++)
            {
                printf("*");
            }
            printf("\n");
        }
        else
        {
            printf("*");
            for (int j = 1; j <= row - 2; j++)
            {
                printf(" ");
            }
            printf("*\n");
        }
    }

    return 0;
}
