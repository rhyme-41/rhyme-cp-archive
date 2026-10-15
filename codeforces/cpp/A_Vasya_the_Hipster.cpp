#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int x, y;
    cin >> x >> y;
    cout << min(x, y) << " " << (max(x, y) - min(x, y)) / 2;

    return 0;
}