// Input :
// 6
// Mila Catron 1977
// Ivan Mendel 1956
// Mihail Egorov 1980
// Eric Catron 1977
// Mihail Egorov 1988
// Petr Mendel 1990

// Output :
// Eric Catron 1977
// Mila Catron 1977
// Mihail Egorov 1988
// Mihail Egorov 1980
// Ivan Mendel 1956
// Petr Mendel 1990

#include <bits/stdc++.h>
using namespace std;

bool cmp(pair<pair<string, string>, int> x, pair<pair<string, string>, int> y)
{
    if (x.first == y.first)
    {
        return (x.second > y.second);
    }
    else
    {
        if (x.first.second == y.first.second)
        {
            return (x.first.first < y.first.first);
        }
        else
        {
            return (x.first.second < y.first.second);
        }
    }
}

int main()
{
    int n;
    cin >> n;
    vector<pair<pair<string, string>, int>> vec(n);
    for (int i = 0; i < n; i++)
    {
        cin >> vec[i].first.first >> vec[i].first.second >> vec[i].second;
    }

    sort(vec.begin(), vec.end(), cmp);

    for (int i = 0; i < n; i++)
    {
        cout << vec[i].first.first << " " << vec[i].first.second << " " << vec[i].second << endl;
    }

    return 0;
}