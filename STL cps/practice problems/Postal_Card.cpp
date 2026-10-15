// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
//     int n, m;
//     cin >> n >> m;
//     map<string, int> map1;
//     string six;
//     for (int i = 0; i < n; i++)
//     {
//         cin >> six;
//         string x = six.substr(3, 3);
//         map1[x]++;
//     }

//     vector<string> vec(m);
//     for (int i = 0; i < m; i++)
//     {
//         cin >> vec[i];
//     }

//     int sum = 0;
//     for (auto data : map1)
//     {
//         for (int i = 0; i < m; i++)
//         {
//             if (data.first == vec[i])
//             {
//                 sum += data.second;
//                 break;
//             }
//         }
//     }
//     cout << sum;
//     return 0;
// }

#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, m;
    cin >> n >> m;
    vector<string> vec(n);
    string s;
    for (int i = 0; i < n; i++)
    {
        cin >> s;
        string str = s.substr(3, 3);
        vec[i] = str;
    }
    map<string, bool> map1;
    for (int i = 0; i < m; i++)
    {
        cin >> s;
        map1[s] = true;
    }
    int ans = 0;
    for (auto data : vec)
    {
        if (map1.count(data) == 1)
            ans++;
    }
    cout << ans;
    return 0;
}