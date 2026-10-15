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
        int n, idx;
        cin >> n;
        vector<int> vec(n);
        for (int i = 0; i < n; i++)
        {
            cin >> vec[i];
        }
        int common;
        if (vec[0] == vec[1] || vec[0] == vec[2])
            common = vec[0];
        else
            common = vec[1];
        for (int i = 0; i < n; i++)
        {
            if (vec[i] != common)
            {
                cout << i + 1 << endl;
                break;
            }
        }
    }

    return 0;
}