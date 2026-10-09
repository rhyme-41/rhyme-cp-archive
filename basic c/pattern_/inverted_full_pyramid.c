#include <stdio.h>
int main()
{
    int row;
    scanf("%d", &row);
    for (int i = 1; i <= row; i++)
    {

        for (int j = 1; j <= i - 1; j++)
        {
            printf(" ");
        }
        for (int k = 1; k <= row + 1 - i; k++)
        {
            printf("* ");
        }

        printf("\n");
    }
    return 0;
}
