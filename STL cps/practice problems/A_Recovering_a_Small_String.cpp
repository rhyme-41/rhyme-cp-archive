#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int check = 0;
        int x;
        cin >> x;
        for (int i = 1; i <= 26; i++)
        {
            for (int j = 1; j <= 26; j++)
            {
                for (int k = 1; k <= 26; k++)
                {
                    if (i + j + k == x)
                    {
                        char c1 = i + 96, c2 = j + 96, c3 = k + 96;
                        cout << c1 << c2 << c3;
                        check = 1;
                        break;
                    }
                }
                if (check == 1)
                    break;
            }
            if (check == 1)
                break;
        }
        cout << endl;
    }
    return 0;
}