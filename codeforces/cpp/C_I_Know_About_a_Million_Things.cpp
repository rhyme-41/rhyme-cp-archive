
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
        int n, odd = 0, even = 0;
        cin >> n;

        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;

            if (x % 2 == 0)
                even++;
            else
                odd++;
        }

        if ((odd == 1 && even == 1) ||
            (odd == 3 && even == 0))
            cout << "Larpity\n";
        else
            cout << "Moggity\n";
    }

    return 0;
}
