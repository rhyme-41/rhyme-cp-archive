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
        int a, b, c;
        cin >> a >> b >> c;
        if (a != max(a, max(b, c)) && a != min(a, min(b, c)))
            cout << a << endl;
        else if (b != max(b, max(a, c)) && b != min(b, min(a, c)))
            cout << b << endl;
        else
            cout << c << endl;
    }

    return 0;
}