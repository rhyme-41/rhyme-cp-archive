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
        int n, k, diff;
        cin >> n >> k;
        vector<int> arr(n);
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        int ans = arr[0];
        for (int i = 1; i < n; i++)
        {
            diff = arr[i] - arr[i - 1];
            if (diff > ans)
                ans = diff;
        }
        int dis = (k - arr[n - 1]) * 2;
        ans = max(ans, dis);
        cout << ans << endl;
    }

    return 0;
}