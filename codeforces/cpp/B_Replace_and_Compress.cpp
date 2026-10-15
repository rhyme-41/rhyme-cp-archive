#include <bits/stdc++.h>
using namespace std;
string compress(string s)
{
    s.erase(unique(s.begin(), s.end()), s.end());
    return s;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        set<string> st;
        int n = s.size();
        st.insert(compress(s));
        for (int i = 1; i < n - 1; i++)
        {
            string z = s;
            if (z[i] == '0')
                z[i] = '1';
            else
                z[i] = '0';

            st.insert(compress(z));
        }
        cout << st.size() << endl;
    }

    return 0;
}