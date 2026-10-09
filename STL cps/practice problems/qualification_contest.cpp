#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, k;
    cin >> n >> k;
    vector<string> vec;
    while (n--)
    {
        string x;
        cin >> x;
        vec.push_back(x);
    }
    sort(vec.begin(), vec.begin() + k);
    for (int i = 0; i < k; i++)
    {
        cout << vec[i] << endl;
    }
}