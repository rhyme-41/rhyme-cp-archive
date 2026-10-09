#include <bits/stdc++.h>
using namespace std;
int main()
{
    // string str1 = "Hello";
    //  string str2;
    //  cin >> str2;
    //  cout << str1 << " " << str2 << endl;
    //  cout << str1 + str2;

    // **********compare********************

    // if (str1 == str2)
    // {
    //     cout << "equal" << endl;
    // }
    // else
    // {
    //     cout << "unequal" << endl;
    // }

    // ******************using a character************

    // for (int i = 0; i < str1.size(); i++)
    // {
    //     cout << str1[i] << endl;
    // }

    // **************getline ********************

    // string str, sent;
    // getline(cin, str);
    // getline(cin, sent);
    // cout << str << endl
    //      << sent << endl;

    // int t;
    // cin >> t;
    // cin.ignore(); // if we do not use this getline takes whitespace
    // while (t--)
    // {
    //     string str;
    //     getline(cin, str);
    //     cout << str << endl;
    // }

    // ***************** string reverse and palindrome *********************

    // string str;
    // cin >> str;
    // string str_rev;
    // for (int i = str.size() - 1; i >= 0; i--)
    // {
    //     str_rev.push_back(str[i]);
    // }
    // cout << str_rev << endl;
    // if (str == str_rev)
    //     cout << "YES" << endl;
    // else
    //     cout << "NO" << endl;

    // *************** large number > long long *************

    string str;
    cin >> str;
    int last_digit = str[str.size() - 1] - '0';
    cout << last_digit << endl;
}