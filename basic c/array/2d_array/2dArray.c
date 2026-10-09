#include <stdio.h>
int main()
{

    // **********************************************2D ARRAY INPUT *****************************************

    // 1 2 3
    // 4 5 6

    // ***********method 1***********
    // int arr[2][3] = {{1, 2, 3}, {4, 5, 6}} / {1,2,3,4,5,6}

    //  *********method 2 *************
    // int arr[2][3];
    // arr[0][0] = 1;
    // arr[0][1] = 2;
    // arr[0][2] = 3;
    // arr[1][0] = 4;
    // arr[1][1] = 5;
    // arr[1][2] = 6;

    // *******************method 3 ****************

    int r;
    printf("Enter row: ");
    scanf("%d", &r);
    int c;
    printf("Enter column: ");
    scanf("%d", &c);

    int arr[r][c];

    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }

    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
    return 0;
}