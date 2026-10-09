#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    vector<string> vec;
    while (n--)
    {
        string x;
        cin >> x;
        vec.push_back(x);
    }
    for (int i = vec.size() - 1; i >= 0; i--)
    {
        cout << vec[i] << endl;
    }
}