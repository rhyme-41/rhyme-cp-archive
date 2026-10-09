#include <stdio.h>

int main()
{

    FILE *x = fopen("cse.txt", "w");
    char str[100] = "Hi I am a cse student\n I live in Dhaka.";
    fputs(str, x);

    fclose(x);

    FILE *y = fopen("cse.txt", "r");
    char st[100];

    while (fgets(st, 100, y) != NULL)
    {
        printf("%s", st);
    }

    fclose(y);

    return 0;
}