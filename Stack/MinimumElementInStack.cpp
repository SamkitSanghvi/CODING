// AVP
// Minimum Element in Stack With Extra space.

#include <bits/stdc++.h>
using namespace std;
stack<int> s;
stack<int> ss;
void push(int a)
{

    s.push(a);
    if (ss.empty() or a <= ss.top())
        ss.push(a);
}

int pop()
{

    if (s.empty())
        return -1;
    int ans = s.top();
    s.pop();
    if (ss.top() == ans)
        ss.pop();

    return ans;
}

int getMin()
{
    if (ss.empty())
        return -1;
    return ss.top();
}

int main()
{

    push(1);
    push(3);
    push(4);
    push(0);
    pop();
    cout << getMin();

    return 0;
}