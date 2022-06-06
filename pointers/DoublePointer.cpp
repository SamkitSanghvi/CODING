// CH
//  why there is no pointer thing in the c++ library
// 1. kis type ka data hai
// 2. kitni byte ko considered karna hai
#include<bits/stdc++.h>
using namespace std;
void update(int **p){
    // p = p + 1; //wrong

    // *p = *p + 1; 

    **p += 1;
}
int main(){

    int i = 5;
    int *p = &i;
    int **ptr = &p;
    
    // printing value of address of i
    // cout<< &i <<" " <<p<<" "<<endl;

    // Printing Value of i
    // cout<<i<<" "<<*p<<" "<<**ptr<<endl; 

    // printing the addresse of pointer p
    // cout<<&p<<" "<<ptr<<endl;

    // p = p + 1;
    cout<<"before" <<" " << i << " "<<p<<" "<<ptr<<endl;
    update(ptr);
    cout<<"after"<<" " << i << " "<<p<<" "<<ptr<<endl;

    // *p = *p + 1;
    cout<<"before" <<" " << i << " "<<p<<" "<<ptr<<endl;
    update(ptr);
    cout<<"after"<<" " << i << " "<<p<<" "<<ptr<<endl;

    // **p = **p + 1;
    cout<<"before" <<" " << i << " "<<p<<" "<<ptr<<endl;
    update(ptr);
    cout<<"after"<<" " << i << " "<<p<<" "<<ptr<<endl;
    return 0;
}