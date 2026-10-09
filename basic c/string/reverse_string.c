#include <stdio.h>
#include <string.h>

int main()
{
    char str[50];
    printf("enter string: ");
    scanf("%49[^\n]", str);

    // ********************finding size of string******************

    // int size = 0;
    // int i = 0;
    // while (str[i] != 0)
    // {
    //     size++;
    //     i++;
    // }

    int size = strlen(str);

    // *******************swapping************************

    for (int i = 0, j = size - 1; i < j; i++, j--)
    {
        char temp = str[i];
        str[i] = str[j];
        str[j] = temp;
    }

    puts(str);

    return 0;
}