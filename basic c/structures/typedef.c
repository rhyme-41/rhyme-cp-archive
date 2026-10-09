#include <stdio.h>
// typedef int apple; // i can use apple in the place of int
typedef int *pointer;
int main()
{
    // apple rhyme = 21, rakib = 9;
    // printf("%d", rakib);

    // ****************************typedef in structer**************************************
    // typedef struct anime
    // {
    //     char name[50];
    //     float imdb;
    //     int rotten_tomato;
    // } Anime;

    // Anime a1 = {"solo leveling", 9.5, 70};
    // Anime a2 = {"demon slayer", 9, 75};

    // printf("name: %s \nimdb: %.1f \nrotten tomato: %d%%\n", a1.name, a1.imdb, a1.rotten_tomato);
    // printf("name: %s \nimdb: %.1f \nrotten tomato: %d%%", a2.name, a2.imdb, a2.rotten_tomato);

    int a, b;
    // int *x = &a, *y = &b;
    pointer x = &a, y = &b;
    printf("%p\n", x);
    printf("%p\n", y);
    return 0;
}