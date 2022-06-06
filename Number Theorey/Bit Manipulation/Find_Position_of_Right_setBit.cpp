// KK
// Find the position of Right most Set bit

// 1 0 1 1 0 1 1 0
// ans is 2
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int count = 0;
    int i =0 ;
    for(i=0;i<n;i++)
    {
        count++;
        if(n&1 == 1)
            break;
        else
            n = n>>1;
    }
    cout<<i+1<<endl;
    return 0;
}