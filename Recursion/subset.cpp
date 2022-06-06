// KK
// Pattenr of taking some element and removing some element is known as Subset Pattern


#include<bits/stdc++.h>
using namespace std;
void subSet(string p,string up){

    if(up.empty()){
        cout<<p<<endl;
        return;
    }

    char ch = up[0];
    subSet(p+ch,up.substr(1));
    subSet(p,up.substr(1));
}

vector<string> suu(string p,string up){
    if(up.empty()){
        vector<string> list;
        list.push_back(p);
        return list;
    }
    char ch = up[0];
    vector<string> left = suu(p+ch,up.substr(1));
    vector<string> right = suu(p,up.substr(1));
    left.insert(left.end(),right.begin(),right.end());
    return left;
}


// AV
void solve(string ip,string op){
    if(ip.length()==0){
        cout<<op<<endl;
        return;
    }
    
    string op1 = op;
    string op2 = op;
    op2.push_back(ip[0]);
    ip.erase(ip.begin()+0);
    solve(ip,op1);
    solve(ip,op2);
}
int main(){

    // subSet("","abc");
    // vector<string> ans = suu("","abc");
    // cout<<"[";
    // for(auto i:ans){
    //     cout<<i<<",";
    // }
    // cout<<"]\n";

    solve("abc","");
    return 0;
}