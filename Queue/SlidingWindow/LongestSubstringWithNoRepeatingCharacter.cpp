// AVP
// Longest Substring with no Repeating Character 
// IP String :- abcabcbb
// OP :- 3 

#include<bits/stdc++.h>
using namespace std;
int main(){

    string str;
    cin>>str;

    int i=0;
    int j=0;
    unordered_map<char,int> mp;
    int len = 0;
    while(j < str.length()){
        mp[str[j]]++;
        
        // if(mp.size() < j-i+1)
        // j++;

        if(mp.size() == (j-i+1) )
        {
            len = max(len,j-i+1);
            j++;
        }

        else if(mp.size() < (j-i+1) )
        { 
            while(mp.size() < j-i+1)
            { 
                mp[str[i]]--;
                if(mp[str[i]] == 0)
                    mp.erase(str[i]);
                i++;
            }
            j++;
        }
    }

    cout<<len<<endl;
    return 0;
}