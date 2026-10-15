/*
    map, set, multiset -> Balanced Binary search tree
   stack, queue, dequeue -> Linked list
   vector, string -> Array
   priority queue -> Heap

   priority_queue declaration
   push(data) -> O(logn)
   top() -> O(1)
   pop() -> O(logn)

   priority_queue<int> pq;
    pq.push(5);
    pq.push(2);
    pq.push(7);
    pq.push(4);

    cout << "size = " << pq.size() << endl;
    cout << "top element: " << pq.top() << endl;
    pq.pop();
    cout << "top element: " << pq.top() << endl;


*/

#include <bits/stdc++.h>
using namespace std;
int main()
{
    using pii = pair<int, int>;
    struct cmp
    {
        bool operator()(pii &p1, pii &p2)
        {
            if (p2.first < p1.first)
                return true;
            if (p2.first == p1.first && p2.second > p1.second)
                return true;
            return false;
        }
    };

    // priority_queue<pii> pq; // priority to larger value
    // priority_queue<pii, vector<pii>, greater<pii>> pq; // priority to smaller value
    priority_queue<pii, vector<pii>, cmp> pq;

    pq.push({5, 1});
    pq.push({8, 9});
    pq.push({5, 3});
    pq.push({7, 9});

    cout << "(" << pq.top().first << "," << pq.top().second << ")" << endl;
    return 0;
}