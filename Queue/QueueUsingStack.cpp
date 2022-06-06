// AC
// Queue Using Stack;
// Approach 1
// Using 2 Stack and Dequeue operation costly

// enqueeu
// Push x to the stack

// Dequeue
// 1. if both the stack empty then print -1
// 2. if stack 2 is empty
// while stack1 is not empty, push Everything from stack1 to stack2
// 3. pop the element from stack2 and return it
#include <bits/stdc++.h>
using namespace std;
class queuee
{
    stack<int> s1;
    stack<int> s2;

public:
    void push(int x)
    {
        s1.push(x);
    }

    int pop()
    {
        if (s1.empty() and s2.empty())
        {
            return -1;
        }

        if (s2.empty())
        {
            while (!s1.empty())
            {
                s2.push(s1.top());
                s1.pop();
            }
        }
        int tt = s2.top();
        s2.pop();
        return tt;
    }

    bool empty()
    {
        return s1.empty() and s2.empty();
    }
};
int main()
{

    queuee q;
    q.push(1);
    q.push(2);
    q.push(3);
    q.push(4);
    cout << q.pop() << endl;
    cout << q.pop() << endl;
    cout << q.pop() << endl;
    cout << q.pop() << endl;
    cout << q.pop() << endl;

    return 0;
}