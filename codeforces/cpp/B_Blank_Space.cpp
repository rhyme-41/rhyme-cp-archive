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
        int n;
        cin >> n;
        int count = 0, ans = 0;
        vector<int> vec(n);
        for (int i = 0; i < n; i++)
        {
            cin >> vec[i];
        }
        for (int i = 0; i < n; i++)
        {
            if (vec[i] == 0)
                count++;
            else
                count = 0;
            if (count > ans)
                ans = count;
        }
        cout << ans << endl;
    }

    return 0;
}