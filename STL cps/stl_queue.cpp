/*
queue declaration
push(data) -> O(1)
size() -> O(1)
front() -> O(1)
pop() -> O(1)
*/

#include <bits/stdc++.h>
using namespace std;
int main()
{
    queue<int> q;
    q.push(5);
    q.push(9);
    q.push(0);
    q.push(3);
    q.push(12);
    cout << "size of queue: " << q.size() << endl;
    cout << "front value of queue: " << q.front() << endl;
    q.pop();
    cout << "front value of queue: " << q.front() << endl;

    return 0;
}