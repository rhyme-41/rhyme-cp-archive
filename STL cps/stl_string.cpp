#include <bits/stdc++.h>
using namespace std;
int main()
{
    // string s1 = "Hello "; // s1 = {'H', 'e', 'l', 'l', 'o', ' '};
    // string s2 = "World";
    // string s;
    // s = s1 + s2; // concat
    // s = "Hello " + '!'; // we cannot do this
    // s = s1 + '!'; // this is correct
    // char c = '!';
    // s = s1;
    // s += c; // this also correct
    // cout << s << endl;
    // cout << "size of s2= " << s2.size() << endl;
    // cout << "size of s1= " << s1.length() << endl;

    //************ push back  pop back ****************

    // string s = "Hell";
    // s.push_back('o');
    // string s = "Hello";
    // s.pop_back();
    // cout << s;

    // ******************** accessing element ***************

    // string s = "Hello";
    //  for (int i = 0; i < s.size(); i++)
    //  {
    //      cout << s[i];
    //  }

    // for (auto c : s)
    // {
    //     cout << c;
    // }

    // ************** iterator ******************
    // string s = "Hello";
    // string::iterator it = s.begin(); // explicitly type
    // auto it = s.begin(); // compiler type
    // it ++; // pointing 2nd position

    // auto it = s.end(); // last character er porer position point kore
    //  it--;              // pointing last element
    //  cout << *it;
    //  for (auto it = s.begin(); it != s.end(); it++)
    //  {
    //      cout << *it;
    //  }

    // ********** reverse string ****************
    // string s = "Hello";
    // string r = "";
    // for (int i = (int)s.size() - 1; i >= 0; i--)
    // {
    //     r += s[i]; // r.push_back(s[i])
    //}
    // cout << r;

    // *******using function *******
    // reverse(s.begin(), s.end());
    // reverse(s.begin(), s.begin() + 2);
    // cout << s;

    // ************* string compare ***********

    // string s1 = "abcd";
    //  string s2 = "X"; //"x"; //"abda";
    //  cout << min(s1, s2);

    // **************** erase a character from string *************

    // string s = "expansion";
    // s.erase(s.begin() + 5);
    // cout << s;
    // ************** string sort *****************
    // string s = "38299280";
    // sort(s.begin(), s.end());
    // sort(s.rbegin(), s.rend()); // sort in reverse order
    // cout << s;

    // ********************* sub string *******************

    // string s = "fireball";
    //  cout << s.substr(2, 3); // 1st parameter -> starting index, 2nd parameter -> size
    //   string length = n -> substring = (n*(n+1))/2

    // for (int i = 0; i < s.size(); i++)
    // {
    //     int maxlen = s.size() - i;
    //     for (int len = 1; len <= maxlen; len++)
    //     {
    //         cout << s.substr(i, len) << endl;
    //     }
    // }

    // for (int i = 0; i < s.size(); i++)
    // {
    //     string x = "";
    //     for (int j = i; j < s.size(); j++)
    //     {
    //         x += s[j];
    //         cout << x << endl;
    //     }
    // }

    // ****************  escape sequence ****************

    // string s = "hel\\nlo"; //"hel\tlo"; //"hel\"lo";
    // cout << s;

    // ******************* string in vector ********************

    // int n;
    // cin >> n;
    // vector<string> vec;
    // while (n--)
    // {
    //     string x;
    //     cin >> x;
    //     vec.push_back(x);
    // }
    // reverse(vec.begin(), vec.end());
    // for (auto x : vec)
    // {
    //     cout << x << endl;
    // }

    // ***************** print all permutation *************
    // string s;
    // cin >> s;
    // do
    // {
    //     cout << s << endl;
    // } while (next_permutation(s.begin(), s.end()));

    // ***************** getline ***************

    int t;
    cin >> t;
    cin.ignore(); // if we do not use this getline takes whitespace
    string s;
    getline(cin, s);
    cout << s << endl;
    return 0;
}