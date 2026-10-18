#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    long long m, n, a;
    cin >> m >> n >> a;
    long long x = (m % a == 0) ? m / a : m / a + 1;
    long long y = (n % a == 0) ? n / a : n / a + 1;
    cout << x * y << endl;

    return 0;
}