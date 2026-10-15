#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    map<string, int> vote;
    string name;
    int maxvote = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> name;
        vote[name]++;
        if (maxvote < vote[name])
            maxvote = vote[name];
    }
    for (auto data : vote)
    {
        if (data.second == maxvote)
        {
            cout << data.first << endl;
        }
    }
    return 0;
}