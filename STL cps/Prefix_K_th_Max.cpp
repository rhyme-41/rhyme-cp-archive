#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, k;
    cin >> n >> k;
    set<int> mst;
    int x;
    for (int i = 1; i <= n; i++)
    {
        cin >> x;
        mst.insert(x);
        if (i >= k)
        {
            if (i == k)
            {
                cout << *mst.begin() << endl;
            }

            else
            {
                mst.erase(mst.begin());
                cout << *mst.begin() << endl;
            }
        }
    }
    return 0;
}