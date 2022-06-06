// KK
// Remove a from String 
// str = baccad ---> bccd


#include<bits/stdc++.h>
using namespace std;
string remove(string s,int i,string ans){
    // string ans = "";
    if(i == s.length())
        return ans;
    
    if(s[i] == 'a'){
        return remove(s,i+1,ans);
    }
    else{
        ans += s[i];
        return remove(s,i+1,ans);
        
    }
}
string rem(string s , int i){
    string ans = "";
    if(i==s.length())
        return ans;

    if(s[i] == 'a')
        return rem(s,i+1);
    
    else
        return s[i] + rem(s,i+1);
}
int main(){

    string str;
    cin>>str;

    string ans;
    cout<<remove(str,0,ans)<<endl;
    cout<<rem(str,0);

    return 0;
}