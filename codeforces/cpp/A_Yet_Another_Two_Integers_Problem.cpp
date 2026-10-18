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
        int a, b, ans;
        cin >> a >> b;
        int diff = abs(b - a);
        if (diff % 10 == 0)
        {
            ans = diff / 10;
        }
        else
        {
            ans = diff / 10 + 1;
        }
        cout << ans << endl;
    }

    return 0;
}