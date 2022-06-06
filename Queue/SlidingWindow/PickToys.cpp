// AVP
// string :- abaccab
// Each character showa type of toy
// Output :- maximum no of toys

// 1. Pick in Continuos Manner
// 2. Pick any two type of categoery
#include <bits/stdc++.h>
using namespace std;
int main()
{

    string str;
    cin >> str;

    int i = 0;
    int j = 0;
    unordered_map<char, int> mp;
    int Length = 0;
        while(j < str.length()){
        
        mp[str[j]]++;
        
        if(mp.size() < 2)
        j++;

        else if(mp.size() == 2)
        {
            Length = max(Length,j-i+1);
            j++;
            // cout<<"Length = "<<Length<<endl;
        }

        else if(mp.size() > 2)
        {
            // cout<<"Length = "<<Length<<endl;
            while(mp.size() > 2){
                mp[str[i]]--;
                if(mp[str[i]] == 0 )
                    mp.erase(str[i]);
                i++;
            }
            j++;
        }
    }

    cout<<count<<endl;
    return 0;
}
