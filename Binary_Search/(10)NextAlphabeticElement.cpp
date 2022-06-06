// AVP
// You are given an Sorted array of Alphabet and a given an alphabet (Key)
// You have to Output Next Element to Key
// Similar with Ceil
#include <bits/stdc++.h>
using namespace std;
char get(char arr[],int n,char x){
        int l=0,h=n-1,m;
        char ans=arr[0];
        while(l <= h)
        {
            m = (l + (h-l)/2);
            int val = arr[m] - 'a';
            if(val > x-'a')
            {
                ans = arr[m];
                h = m - 1;
            }
            else l = m + 1;
        }
        return ans;
}
int main()
{
    int n;
    char x;
    cin >> n >> x;

    char arr[n];
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    
    char y = upper_bound(arr,arr+n,x)-arr; 
    cout<<arr[y]<<endl;

    cout<<get(arr,n,x)<<endl;

    return 0;
}