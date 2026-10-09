#include <stdio.h>
#include <string.h>
typedef struct coder
{
    int age;
    char title[50];
} coder;

void change(coder *x)
{
    x->age = 18;
    strcpy(x->title, "master");
}
int main()
{

    coder Benq = {32, "legendary grandmaster"};
    coder *p = &Benq;
    printf("%d\n", (*p).age);
    printf("%s\n", (*p).title);

    // ****************another way*******************

    change(&Benq); // or change(p);

    printf("%d\n", p->age);
    printf("%s", p->title);

    return 0;
}