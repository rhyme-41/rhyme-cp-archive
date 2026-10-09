#include <stdio.h>
#include <string.h>
int main()
{
    struct Person
    {
        char name[50];
        int salary;
        int age;
    };

    // struct Person p1;
    // strcpy(p1.name, "tourist");
    // p1.salary = 72000;
    // p1.age = 22;

    // struct Person p2;
    // strcpy(p2.name, "Benq");
    // p2.salary = 65000;
    // p2.age = 17;

    // Declare and initialize two structure variables
    struct Person p1 = {"Tourist gusdy", 65000, 22};
    struct Person p2 = {"Benq", 72000, 17};
    struct Person p3 = p1; // deep copy of p1

    printf("Name of 1st Person: %s\n", p1.name);
    printf("Age of 2nd Person: %d\n", p2.age);
    printf("Age of 3rd Person: %d", p3.age);
    return 0;
}