#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    int count = 0;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        if (s == "Icosahedron")
            count += 20;
        else if (s == "Cube")
            count += 6;
        else if (s == "Tetrahedron")
            count += 4;
        else if (s == "Dodecahedron")
            count += 12;
        else
            count += 8;
    }
    cout << count << endl;
    return 0;
}