#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    vector<pair<string, string>> vec(n);
    for (int i = 0; i < n; i++)
    {
        cin >> vec[i].first >> vec[i].second;
    }
    sort(vec.begin(), vec.end());
    vec.erase(unique(vec.begin(), vec.end()), vec.end());
    cout << vec.size();

    return 0;
}