// AVP
// Count the Occurence of Anagrams

// Number of before and after should be same
// Anagram :- Jumble the word
// Anagram of Fox will be
// fxo
// xfo
// xof
// ofx
// oxf

#include <bits/stdc++.h>
using namespace std;
int main()
{

    string s1, s2;
    cin >> s1 >> s2;

    int n = s2.length();
    map<char, int> mp;
    for (int i = 0; i < n; i++)
        mp[s2[i]]++;

    int i = 0, j = 0,count = mp.size();
    int ans = 0;
    while (j < n)
    {
        mp[s1[j]]--;

        if(mp[s1[j]]==0)
        count--;

        if(j-i+1 < n)
        j++;

        if(j-i+1 == n)
        { 
            if(count==0)
                ans++;
            mp[s1[i]]++;
            if(mp[s1[i]] ==1)
                count++;
            i++;
            j++;

        }

    }

    cout<<ans<<endl;

    return 0;
}