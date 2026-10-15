/*
dequeue declaration
push_back(data) -> O(1)
push_front(data) -> O(1)
size() -> O(1)
front() -> O(1)
back() -> O(1)
pop_back() -> O(1)
pop_front() -> O(1)
*/

#include <bits/stdc++.h>
using namespace std;

int main()
{
    deque<int> dq;
    dq.push_back(4);
    dq.push_back(7);
    dq.push_front(1);
    dq.push_back(9);
    cout << "last element of deque is: " << dq.back() << endl;
    cout << "first element of deque is: " << dq.front() << endl;

    dq.pop_back();
    dq.pop_front();
    cout << "last element of deque is: " << dq.back() << endl;
    cout << "first element of deque is: " << dq.front() << endl;
    return 0;
}