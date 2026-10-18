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
        int n, cnt = 0;
        cin >> n;
        int minidx = n - 1, maxidx = 0;
        string s;
        cin >> s;
        for (int i = 0; i < n; i++)
        {
            if (s[i] == '1')
            {
                cnt++;
                if (minidx > i)
                    minidx = i;
                if (maxidx < i)
                    maxidx = i;
            }
        }
        if (cnt >= 3)
        {
            cout << maxidx - minidx << "\n";
        }
        else
        {
            if (cnt == 1)
                cout << 0 << "\n";
            else
            {
                cout << 1 << "\n";
            }
        }
    }

    return 0;
}