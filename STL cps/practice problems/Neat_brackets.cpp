// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
//     string s;
//     cin >> s;
//     int count = 0;
//     for (int i = 0; i < s.size(); i++)
//     {
//         if (s[i] == '(')
//             count++;
//         else
//             count--;
//         if (count < 0)
//         {
//             cout << "No" << endl;
//             return 0;
//         }
//     }
//     if (count == 0)
//         cout << "Yes" << endl;
//     else
//         cout << "No" << endl;
//     return 0;
// }

// ************** using stack ******************

#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin >> s;
    stack<char> st;
    for (char c : s)
    {
        if (c == '(')
        {
            st.push('(');
        }
        else if (c == ')' && st.size() > 0)
        {
            st.pop();
        }
        // else{
        //     cout<<"No"<<endl;
        //     return 0;
        // }
    }
    if (st.size() != 0)
        cout << "No" << endl;
    else
        cout << "Yes" << endl;
    return 0;
}