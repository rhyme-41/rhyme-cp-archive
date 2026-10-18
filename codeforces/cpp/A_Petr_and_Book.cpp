#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    int sum = 0, cnt = 0;
    vector<int> vec(7);
    for (int i = 0; i < 7; i++)
    {
        cin >> vec[i];
    }
    for (int i = 0; 1; i++)
    {
        sum += vec[i];
        cnt++;
        if (sum >= n)
        {
            break;
        }
        if (i == 6)
            i = -1;
    }
    if (cnt % 7 == 0)
        cout << 7 << endl;
    else
        cout << cnt % 7 << endl;

    return 0;
}