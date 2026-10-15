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
    multiset<int> mst = {2, 7, 0, 7, 4, 2, 8};
    mst.insert(3);
    cout << mst.size() << endl;
    for (auto x : mst)
    {
        cout << x << " ";
    }
    // values of multiset are always sorted but not unique
    cout << endl;
    cout << mst.count(7) << endl; // multiset e count oi number kotobar ace ta return kore
    // mst.erase(7);                 // erase korle oi number jotobar ace all erase hoy
    mst.erase(mst.find(7)); // evabe korle ekta value only erase korbe oi number er
    for (auto x : mst)
    {
        cout << x << " ";
    }
    return 0;
}