// Inisialize front and back pointer at -1
// AC
#include<bits/stdc++.h>
using namespace std;
#define n 20
class queuee{
    int* arr;
    int front;
    int back;

    public:
    queuee(){
        arr = new int[n];
        front = -1;
        back = -1;
    }

    void enqueue(int x){
        if(back == n-1){
            cout<<"Queue is Ful"<<endl;
            return;
        }

        else{
        back++;
        arr[back] = x;
        }

        if(front==-1) front++;
    }

    void dequeue(){
        if(front == -1 or front > back){ 
            cout<<"Queue is empty!"<<endl;
            return;
        }

        else
        front++;
    }

    int peek(){
        if(front == -1 or front > back){ 
            cout<<"Queue is empty!"<<endl;
            return -1;
        }

        else
        return arr[front];
    }

    bool isEmpty(){
        if(front == -1 or front > back){
            return true;
        }

        else
        return false;
    }

    


};
int main(){

    queuee q;
    q.enqueue(3);
    q.enqueue(4);
    q.enqueue(5);
    cout<<q.peek()<<endl;
    q.dequeue();
    q.dequeue();
    q.dequeue();
    cout<<q.isEmpty()<<endl;
    return 0;
}

