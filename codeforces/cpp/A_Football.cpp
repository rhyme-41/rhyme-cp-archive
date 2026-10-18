#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, team1 = 1, team2 = 0;
    cin >> n;
    string s, s1, s2;
    cin >> s;
    s1 = s;
    for (int i = 1; i < n; i++)
    {
        cin >> s;
        if (s == s1)
            team1++;
        else
        {
            s2 = s;
            team2++;
        }
    }
    if (team1 > team2)
        cout << s1 << endl;
    else
        cout << s2 << endl;

    return 0;
}