#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    int mishka = 0, chris = 0;
    int a, b;
    while (n--)
    {
        cin >> a >> b;
        if (a > b)
            mishka++;
        if (b > a)
            chris++;
    }
    if (mishka > chris)
        cout << "Mishka";
    else if (chris > mishka)
        cout << "Chris";
    else
        cout << "Friendship is magic!^^";

    return 0;
}