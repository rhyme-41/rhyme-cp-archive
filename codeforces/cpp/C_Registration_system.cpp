#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    map<string, int> name;
    string s;

    for (int i = 0; i < n; i++)
    {
        cin >> s;
        if (name[s] == 0)
        {
            cout << "OK" << endl;
            name[s]++;
        }
        else
        {
            cout << s << name[s] << endl;
            name[s]++;
        }
    }

    return 0;
}