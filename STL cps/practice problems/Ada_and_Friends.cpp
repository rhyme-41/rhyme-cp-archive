#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, k;
    cin >> n >> k;
    map<string, long long> friends;
    string name;
    int money;
    for (int i = 0; i < n; i++)
    {
        cin >> name >> money;
        friends[name] += money;
    }
    vector<long long> vec(friends.size());
    int i = 0;
    for (auto data : friends)
    {
        vec[i] = data.second;
        i++;
    }
    sort(vec.rbegin(), vec.rend());
    long long sum = 0;
    for (int i = 0; i < vec.size() && i < k; i++)
    {
        sum += vec[i];
    }
    cout << sum;

    return 0;
}