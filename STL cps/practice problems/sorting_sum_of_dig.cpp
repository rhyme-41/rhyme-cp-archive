// ****************** sorting comparing sum of digits *************
#include <bits/stdc++.h>
using namespace std;
int sod(int n)
{
    int sum = 0;
    while (n)
    {
        int lastdigit = n % 10;
        sum += lastdigit;
        n = n / 10;
    }
    return sum;
}
bool cmp(int x, int y)
{
    return sod(x) < sod(y);
}
int main()
{
    vector<int> vec = {5, 10, 12, 17};
    sort(vec.begin(), vec.end(), cmp);
    for (auto x : vec)
    {
        cout << x << " ";
    }

    return 0;
}