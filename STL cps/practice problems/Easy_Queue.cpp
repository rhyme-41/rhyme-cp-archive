#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    scanf("%d", &t);
    queue<int> q;
    int op;
    while (t--)
    {
        scanf("%d", &op);
        if (op == 1)
        {
            int x;
            scanf("%d", &x);
            q.push(x);
        }
        else if (op == 2)
        {
            if (q.size() > 0)
                q.pop();
        }
        else
        {
            if (q.size() > 0)
                printf("%d\n", q.front());
            else
                printf("Empty!\n");
        }
    }
    return 0;
}