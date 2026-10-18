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
        int n, ans = 0;
        cin >> n;
        vector<char> vec;
        char c;
        for (int i = 0; i < n; i++)
        {
            cin >> c;
            if (count(vec.begin(), vec.end(), c) == 0)
            {
                ans += 2;
                vec.push_back(c);
            }
            else
                ans++;
        }
        cout << ans << endl;
    }

    return 0;
}