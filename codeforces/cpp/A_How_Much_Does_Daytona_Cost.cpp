#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, k, flag = 0;
        cin >> n >> k;
        while (n--)
        {
            int x;
            cin >> x;
            if (x == k)
            {
                flag = 1;
            }
        }
        if (flag)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    return 0;
}