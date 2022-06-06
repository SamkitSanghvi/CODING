// CH 30
// Global is a Bad Pratice Beacause it can get changed anywhere
// Then what to used --> Reference Variable

#include<bits/stdc++.h>
using namespace std;

int score = 15;

void a(int &a){
    cout<<"Score in a"<<score<<endl;
    score++;
    cout<<a<<endl;
    // b(a);
}
void b(int &b){ 
    cout<<"Score in b"<<score<<endl;
    cout<<b<<endl;
}
int main(){

    int i = 5;
    a(i);
    b(i);
    return 0;
}