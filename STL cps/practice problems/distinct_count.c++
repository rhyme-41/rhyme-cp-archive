// ********** distinct count *****************

// ********************* method 1 ********************
// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
//     int t;
//     cin >> t;
//     while (t--)
//     {
//         int n, x;
//         cin >> n >> x;
//         vector<int> vec;
//         for (int i = 0; i < n; i++)
//         {
//             int found = 0;
//             int z;
//             cin >> z;
//             for (int j = 0; j < vec.size(); j++)
//             {
//                 if (z == vec[j])
//                 {
//                     found = 1;
//                     break;
//                 }
//             }
//             if (!found)
//                 vec.push_back(z);
//         }
//         if (vec.size() == x)
//             cout << "Good" << endl;
//         else if (vec.size() > x)
//             cout << "Average" << endl;
//         else
//             cout << "Bad" << endl;
//     }
//     return 0;
// }

// *********************** method 2 ************************

#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, x;
        cin >> n >> x;
        vector<int> vec;
        int y;
        for (int i = 0; i < n; i++)
        {
            cin >> y;
            vec.push_back(y);
        }
        sort(vec.begin(), vec.end());
        int count = 1;
        int lastelement = vec[0];
        for (int i = 1; i < n; i++)
        {
            if (vec[i] != lastelement)
            {
                count++;
                lastelement = vec[i];
            }
        }

        if (count == x)
            cout << "Good" << endl;
        else if (count > x)
            cout << "Average" << endl;
        else
            cout << "Bad" << endl;
    }
    return 0;
}