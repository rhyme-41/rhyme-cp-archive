#include <bits/stdc++.h>
using namespace std;
bool cmp(pair<int, int> x, pair<int, int> y)
{
    if (x.first == y.first)
    {
        if (x.second > y.second)
            return true;
        else
            return false;
    }
    else
    {
        if (x.first < y.first)
            return true;
        else
            return false;
    }
}
int main()
{
    // pair<string, int> info1, info2;
    // cin >> info1.first >> info1.second;
    // cin >> info2.first >> info2.second;
    // if (info2.second > info1.second)
    // {
    //     swap(info1, info2); // only one time using swap func and swaping two items
    // }
    // cout << info1.first << " " << info1.second << endl;
    // cout << info2.first << " " << info2.second << endl;

    // *********************** sorting vector **********************

    // Input:               output:
    // 4                    ascending
    // 3 5                  2 7
    // 2 7                  3 2
    // 10 1                 3 5
    // 3 2                  10 1

    // int n;
    // cin >> n;
    // vector<pair<int, int>> vec(n);
    // for (int i = 0; i < n; i++)
    // {
    //     cin >> vec[i].first >> vec[i].second;
    // }
    // sort(vec.begin(), vec.end()); // ascending order
    // sort(vec.rbegin(), vec.rend()); // descending order
    // sort(vec.begin(), vec.end(), greater<pair<int, int>>()); // descending order
    // for (auto x : vec)
    // {
    //     cout << x.first << " " << x.second << endl;
    // }

    // for (int i = 0; i < n; i++)
    // {
    //     cout << vec[i].first << " " << vec[i].second << endl;
    // }

    // ********************************************

    // Input:               output:
    // 4                    ascending
    // 3 5                  2 7
    // 2 7                  3 5
    // 10 1                 3 2
    // 3 2                  10 1

    int n;
    cin >> n;
    vector<pair<int, int>> vec(n);
    for (int i = 0; i < n; i++)
    {
        cin >> vec[i].first >> vec[i].second;
    }

    sort(vec.begin(), vec.end(), cmp);
    for (int i = 0; i < n; i++)
    {
        cout << vec[i].first << " " << vec[i].second << endl;
    }
    return 0;
}