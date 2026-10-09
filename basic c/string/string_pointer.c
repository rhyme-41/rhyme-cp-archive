#include <stdio.h>
#include <string.h>
int main()
{
    // char str[] = "hello world";
    // char *ptr = str; // & not needed because the name of an array automatically decays into a pointer to its first element (&str[0])
    // // *ptr = 'c';
    // printf("%p\n", &str[0]);
    // printf("%p\n", &str);
    // printf("%p\n", ptr);
    // printf("%p\n", &ptr);
    // printf("%c\n", *ptr);
    // printf("%s\n", str);

    // *************another way to print string ***********
    // while (*ptr != '\0')
    // {
    //     printf("%c", *ptr);
    //     ptr++;
    // }

    // ****************another way of initialising string **************

    // const char *x = "full recovery"; // a string literal created in memory and x is initialized with a pointer to its first character.
    // printf("%c\n", *x);              // I can print the character but can't change it
    // printf("%s\n", x);
    // printf("Address 1(f): %p\n", x); // full recovery er f jei memory address e create hoice
    // x = "solo leveling";             // now i am pointing another string literal
    // printf("%c\n", *x);
    // printf("%s\n", x);
    // printf("Address 2(s): %p\n", x); // solo leveling er s jei memory address e create hoice
    // x++;
    // printf("%c\n", *x);              // printing the character that is pointed
    // printf("Address 2(o): %p\n", x); // solo leveling er o jei memory address e create hoice

    // **************************making a deep copy of a string **********************************

    char *p1 = "Iron man";
    char *p2;
    p2 = p1;
    printf("%s\n", p1);
    printf("%s", p2);

    return 0;
}