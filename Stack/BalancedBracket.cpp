// TUF
// Balanced Brackets
// s = ()[{}()] -> Balanced 
// s = ](){ -> Not Balanced
#include<bits/stdc++.h>
using namespace std;
bool Balanced(string s){
    stack<char> st;
    for(int i=0; i<s.size();i++){
        if(s[i]=='(' or s[i]=='{' or s[i]=='['){
            st.push(s[i]);
        }

        else{
            if(st.empty())
            return false;

            char c = st.top();
            st.pop();

            if((s[i]=='}' and c=='{') or (s[i]==']' and c=='[') or (s[i]==')' and c=='(')){
                continue;
            }

            else
            return false;
        }
    }
    
        return st.empty();
}
int main(){

    string s;
    cin>>s;

    if(Balanced(s))
        cout<<"It is Balanced Bracket String"<<endl;
    else
        cout<<"It is Notbalanced Bracket String"<<endl;

    return 0;
}