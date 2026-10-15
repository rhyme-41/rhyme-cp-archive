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
        int flag = 0;
        vector<int> vec(n);
        for (int i = 0; i < n; i++)
        {
            cin >> vec[i];
        }
        sort(vec.begin(), vec.end());
        for (int i = 1; i < n; i++)
        {
            if (vec[i] - vec[i - 1] > 1)
                flag = 1;
        }
        if (flag)
            cout << "NO\n";
        else
            cout << "YES\n";
    }

    return 0;
}