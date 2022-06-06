// AVP
// Minimum Window Substring
// PS-IP-OP

// Two String Given
// str1:- TimeToPratice
// str2:-toc

// Minimum length of substring that str2 is present in str1 
// It follow order of characters
// But it may be continuos or may not be..

// Two Question
// 1. Return the Length of Smallest String
// 2. Print that String
#include<bits/stdc++.h>
using namespace std;
int main(){

    string str1, str2;
    cin>>str1>>str2;

    unordered_map<char,int> mp;
    for(int i=0; i<str2.size(); i++)
    mp[str2[i]]++; 


    int i=0;
    int j=0;
    int count = mp.size();
    int length = 0;
    while(j < str1.size()){
        if(str1[j] == mp.find(str1[j])){
            mp[str1[j]]--;
            j++;
        }

        if(mp[str1[j]]==0)
        count--;

        if(count == 0){ 
            length = max(length,j-i+1);
            j++;

            if(str1[i] != mp[str1[i]])
                i++;
            else if(str1[i] != mp[str1[i]] and mp[str1[i]] < 0 ){ 
                mp[str1[i]]++;
                i++;
                length--;
            }
        }
    }
    cout<<length<<endl;
    return 0;
}
