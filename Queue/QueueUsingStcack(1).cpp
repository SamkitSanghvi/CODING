// AC
// Queue Using Stack;
// Approach 2
// Using Function Call Stack

// enqueeu
// Push x to the stack

// Dequeu
// 1. if Stack 1 is empty then print error
// 2. if Stack has only one element then return it
// 3. Recursively pop everythng from the stack1, store the popped item in a variable res, push the res to stack1 and return res

#include <bits/stdc++.h>
using namespace std;
class queuee{
    stack<int> s1;  
public:
        void push(int x) { 
            s1.push(x);
        }

        int pop(){
            if(s1.empty()) {
                return -1;
            }
            int x = s1.top();
            s1.pop();
            if(s1.empty()) {
                return x;
            }

            int item = pop();
            s1.push(x);
            return item; 
        }

        bool empty(){
            return s1.empty();
        }
};

int main(){
    queuee q;
    q.push(1);
    q.push(2);
    q.push(3);
    q.push(4);
    cout<<q.pop()<<endl;
    cout<<q.pop()<<endl;
    cout<<q.pop()<<endl;
    cout<<q.pop()<<endl;
    cout<<q.pop()<<endl;

    return 0;
}