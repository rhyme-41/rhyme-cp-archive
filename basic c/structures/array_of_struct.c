#include <stdio.h>
int main()
{
    typedef struct cricketer
    {
        char name[20];
        int age;
        int matches;
        float average;
    } cricketer;

    cricketer arr[3];
    for (int i = 0; i < 3; i++)
    {
        scanf(" %19[^\n]", arr[i].name);
        scanf("%d", &arr[i].age);
        scanf("%d", &arr[i].matches);
        scanf("%f", &arr[i].average);
    }
    for (int i = 0; i < 3; i++)
    {
        printf("name: %s\n", arr[i].name);
        printf("age: %d\n", arr[i].age);
        printf("Total matches played: %d\n", arr[i].matches);
        printf("Average: %.2f\n\n", arr[i].average);
    }
}