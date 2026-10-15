/*
balanced binary search tree -> red black tree
set declaration
insert(data) -> O(logn)
size() -> O(1)
printing all data
erase(data) -> O(logn)
count(data) -> O(logn)
begin() -> O(1)
end() -> O(1)
find(data) -> O(logn)
*/

#include <bits/stdc++.h>
using namespace std;
int main()
{
    set<int> st = {2, 7, 0, 7, 4, 2, 8};
    st.insert(3);
    st.erase(4);
    // cout << st.size() << endl;
    for (auto x : st)
    {
        cout << x << " ";
    }
    // values of set are always unique and sorted
    cout << endl;
    // if (st.count(5))
    //     cout << "5 is in set" << endl;
    // else
    //     cout << "5 is not in set" << endl;

    // kono specific number er ager ba porer number ber kora
    auto it = st.find(7);
    // set er moddhe value thakle oi value er iterator return kore
    // set er moddhe value na thakle last value er porer iterator/st.end() return kore
    it--; // we cant use it-=1
    cout << *it;

    return 0;
}