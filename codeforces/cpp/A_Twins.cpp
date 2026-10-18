#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, sum = 0;
    cin >> n;
    vector<int> vec(n);
    for (int i = 0; i < n; i++)
    {
        cin >> vec[i];
        sum += vec[i];
    }
    sort(vec.rbegin(), vec.rend());
    int cnt = 0, total = 0;
    for (auto z : vec)
    {
        total += z;
        cnt++;
        if (total > sum - total)
        {
            break;
        }
    }
    cout << cnt;

    return 0;
}