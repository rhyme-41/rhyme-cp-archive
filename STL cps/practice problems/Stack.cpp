#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    vector<stack<int>> vec(n);
    int t;
    cin >> t;
    int op;

    while (t--)
    {
        cin >> op;
        int sn, num;
        if (op == 0)
        {
            cin >> sn >> num;
            vec[sn].push(num);
        }
        else if (op == 1)
        {
            cin >> sn;
            if (vec[sn].size() > 0)
                cout << vec[sn].top() << endl;
        }
        else
        {
            cin >> sn;
            if (vec[sn].size() > 0)
                vec[sn].pop();
        }
    }
    return 0;
}