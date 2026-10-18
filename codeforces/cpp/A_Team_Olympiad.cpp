#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    vector<int> one, two, three;
    for (int i = 1, x; i <= n; i++)
    {
        cin >> x;
        if (x == 1)
            one.push_back(i);
        else if (x == 2)
            two.push_back(i);
        else
            three.push_back(i);
    }
    int count = min(one.size(), min(two.size(), three.size()));
    cout << count << endl;
    for (int i = 0; i < count; i++)
    {
        cout << one[i] << " " << two[i] << " " << three[i] << endl;
    }

    return 0;
}