/*
stack declaration
push(data) -> O(1)
size() -> O(1)
top() -> O(1)
pop() -> O(1)
*/

#include <bits/stdc++.h>
using namespace std;
int main()
{
    stack<int> stk;
    stk.push(3);
    stk.push(7);
    stk.push(0);
    stk.push(6);
    cout << "size of stack: " << stk.size() << endl;
    cout << "top element: " << stk.top() << endl;
    stk.pop();
    cout << "top element: " << stk.top() << endl;

    return 0;
}