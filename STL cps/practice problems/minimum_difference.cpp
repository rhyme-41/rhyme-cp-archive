// print minimum difference in less than O(n^2) complexity

#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    set<int> st;
    int ans = INT_MAX;
    for (int i = 0, x; i < n; i++)
    {
        cin >> x;
        if (st.count(x))
        {
            ans = 0;
            cout << 0 << " ";
            continue;
        }
        st.insert(x);
        if (i == 0)
            continue;
        auto prev = st.find(x);
        if (prev != st.begin())
        {
            prev--;
            ans = min(ans, x - *prev);
        }
        auto nxt = st.find(x);
        nxt++;
        if (nxt != st.end())
        {
            ans = min(ans, *nxt - x);
        }
        cout << ans << " ";
    }
    return 0;
}