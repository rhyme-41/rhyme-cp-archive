#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int a, b, c, d, sum = 0;
    cin >> a >> b >> c >> d;
    string s;
    cin >> s;
    for (auto ch : s)
    {
        if (ch == '1')
            sum += a;
        else if (ch == '2')
            sum += b;
        else if (ch == '3')
            sum += c;
        else
            sum += d;
    }
    cout << sum;

    return 0;
}