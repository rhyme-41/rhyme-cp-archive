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
        int n, k;
        cin >> n >> k;
        if (k >= n)
        {
            cout << -1 << endl;
        }
        else
        {
            cout << min(k, n - k) << endl;
        }
    }

    return 0;
}