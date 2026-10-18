#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, k, count = 0;
    cin >> n >> k;
    for (int i = 0, x; i < n; i++)
    {
        cin >> x;
        if (x <= 5 - k)
            count++;
    }
    cout << count / 3;

    return 0;
}