// AV
// Permutation with Spaces
// Ip -> A string is Gievn
// ABC

// Output
// A_B_C ---> AB_C ---> A_BC--> ABC
#include<bits/stdc++.h>
using namespace std;
void solve(string ip,string op){
    if(ip.length() == 0){
        cout<<op<<" ";
        return;
    }

    string op1 = op;
    string op2 = op;
    op1.push_back('_');
    op1.push_back(ip[0]);
    op2.push_back(ip[0]);
    ip.erase(ip.begin()+0);
    solve(ip,op1);
    solve(ip,op2);

}
int main(){
    
    string str;
    cin>>str;
    string op = "";
    op.push_back(str[0]);
    str.erase(str.begin()+0);
    solve(str,op);
    return 0;
}