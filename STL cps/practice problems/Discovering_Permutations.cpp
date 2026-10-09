#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    for (int i = 1; i <= t; i++)
    {
        int n, k;
        cin >> n >> k;
        string s = "";
        for (char j = 'A'; j < n + 65; j++)
        {
            s.push_back(j);
        }
        cout << "Case" << " " << i << ":" << endl;
        for (int j = 0; j < k; j++)
        {
            cout << s << endl;
            if (!next_permutation(s.begin(), s.end()))
                break;
        }
    }
    return 0;
}