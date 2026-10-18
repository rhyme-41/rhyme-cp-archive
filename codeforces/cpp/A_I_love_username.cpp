#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    int cnt = 0;
    int x;
    cin >> x;
    int mn = x, mx = x;
    for (int i = 1; i < n; i++)
    {
        cin >> x;
        if (mn > x)
        {
            mn = x;
            cnt++;
        }
        if (mx < x)
        {
            mx = x;
            cnt++;
        }
    }
    cout << cnt << endl;

    return 0;
}