// AVP
// Longest Substring With K Unique Character
// IP-OP-PS
// String = aabacbebebe and k = 3
// aabac
// aabacb
// bacb
// cbebebe
// Op:- Longest Substring with k unique character


#include<bits/stdc++.h>
using namespace std;
int main(){

    string str;
    cin>>str;

    int k;
    cin>>k;

    unordered_map<char,int> mp;
    int i = 0;
    int j = 0;
    int count_Size = mp.size();
    int Length = 0;

    while(j < str.length()){
        
        mp[str[j]]++;
        
        if(mp.size() < k)
        j++;

        else if(mp.size() == k)
        {
            Length = max(Length,j-i+1);
            j++;
            // cout<<"Length = "<<Length<<endl;
        }

        else if(mp.size() > k)
        {
            // cout<<"Length = "<<Length<<endl;
            while(mp.size() > k){
                mp[str[i]]--;
                if(mp[str[i]] == 0 )
                    mp.erase(str[i]);
                i++;
            }
            j++;
        }
    }

    cout<<Length<<endl;

    return 0;
}