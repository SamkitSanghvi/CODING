// AC
// Dequeue
// Push and Pop from the front
// Inset and delete from the start

#include<bits/stdc++.h>
using namespace std;
int main(){
    deque<int> dq;
    dq.push_back(1);
    dq.push_back(2);
    dq.push_front(3);
    dq.push_front(4);
    cout<< dq.front() << endl;
    dq.pop_front();
    dq.pop_back();
    for(auto i : dq){
        cout<<i<<" ";
    }

    return 0;
}