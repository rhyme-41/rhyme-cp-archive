#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    string s = "codeforces";
    while (t--)
    {
        char c;
        int flag = 0;
        cin >> c;
        for (auto x : s)
        {
            if (x == c)
            {
                flag = 1;
            }
        }
        if (flag)
            cout << "yes" << endl;
        else
            cout << "no" << endl;
    }

    return 0;
}