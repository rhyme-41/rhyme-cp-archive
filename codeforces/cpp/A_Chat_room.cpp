#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string s;
    cin >> s;
    string s1 = "hello";
    int j = 0;
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] == s1[j])
        {
            j++;
        }
        if (j == 5)
        {
            cout << "YES\n";
            return 0;
        }
    }
    cout << "NO\n";

    return 0;
}