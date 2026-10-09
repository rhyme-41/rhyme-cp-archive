#include <bits/stdc++.h>
using namespace std;
int main()
{
    // int a = 100000;
    // int b = 100000;
    // long long c = a * 1LL * b; //without 1LL its error
    // cout << c << endl;

    // ***************showing specific number after point ****************

    int a, b;
    cin >> a >> b;
    double z = (double)a / b;
    cout << fixed << setprecision(3) << z << endl;

    return 0;
}