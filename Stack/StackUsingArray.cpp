// AC
// Implementing Stack Using Array

#include <bits/stdc++.h>
using namespace std;
#define n 100
class stacck
{
    int *arr;
    int top;

public:
    stacck()
    {
        arr = new int[n];
        top = -1;
    }

    void push(int x)
    {
        if (top == n - 1)
        {
            cout << "Stack Overflow" << endl;
            return;
        }

        else
            arr[++top] = x;
    }

    void pop()
    {
        if (top == -1)
        {
            cout << "Stack is Empty" << endl;
            return;
        }
        else{
            top--;
        }
    }
    int Top(){
        if(top==-1)
        {
            cout<<"Stack is Empty"<<endl;
            return -1;
        }

        return arr[top];
    }

    bool isempty(){
        if(top==-1)
        return true;

        else
        return false;
    }

    bool isFull(){
        return top==n-1;
    }
};

int main()
{
    stacck st;
    st.push(1);
    cout<<st.Top();
    return 0;
}