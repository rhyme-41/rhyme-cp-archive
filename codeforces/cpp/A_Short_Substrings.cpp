#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        int n = s.length();
        string s1;
        s1 = s[0];
        for (int i = 1; i < n - 1; i += 2)
        {
            s1 += s[i];
        }
        s1 += s[n - 1];
        cout << s1 << endl;
    }

    return 0;
}