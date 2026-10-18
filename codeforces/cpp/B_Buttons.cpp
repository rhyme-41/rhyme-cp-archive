#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    long long n;
    cin >> n;
    long long sum = n;
    for (int i = 1; i < n; i++)
    {
        sum = sum + i * (n - i);
    }
    cout << sum;

    return 0;
}