#include <stdio.h>
#include <string.h>
int main()
{
    typedef struct pokemon
    {
        char tier;
        int speed;
        int attack;
        int hp;
    } pokemon;

    typedef struct legendarypokemon
    {
        char ability[25];
        pokemon normal;
    } legend;

    typedef struct godpokemon
    {
        char specialattack[50];
        legend special;
    } godpokemon;

    pokemon pikachu;
    pikachu.attack = 40;
    pikachu.hp = 50;
    pikachu.speed = 80;
    pikachu.tier = 'B';

    legend charizard;
    strcpy(charizard.ability, "planetary devastation");
    charizard.normal.attack = 100;
    charizard.normal.hp = 150;
    charizard.normal.speed = 60;
    charizard.normal.tier = 'A';

    godpokemon mewtwo;
    strcpy(mewtwo.specialattack, "shadow clone");
    strcpy(mewtwo.special.ability, "shadow position");
    mewtwo.special.normal.attack = 200;
    mewtwo.special.normal.hp = 250;
    mewtwo.special.normal.speed = 180;
    mewtwo.special.normal.tier = 'S';

    printf("special attack of mewtwo: %s\n", mewtwo.specialattack);
    printf("ability of mewtwo: %s\n", mewtwo.special.ability);
    printf("hp of mewtwo: %d\n", mewtwo.special.normal.hp);
    printf("tier of charizard: %c\n", charizard.normal.tier);

    return 0;
}