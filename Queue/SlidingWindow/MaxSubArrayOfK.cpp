// AVP
// Maximum Sum Subarray of Size K 

#include<bits/stdc++.h>
using namespace std;
int main(){

    int n,k;
    cin>>n>>k;

    int arr[n];
    for(int i=0; i<n; i++)
        cin>>arr[i];
    
    int i=0,j=0;
    int sum = 0;
    int mx = 0;
    while(j<n){
        

        if(j-i+1 < k){
        sum += arr[j];
        j++;
        }

        else if(j-i+1 == k)
        {
            sum += arr[j];
            mx = max(mx,sum);
            // cout<<mx<<" "<<sum<<" "<<endl;   
            sum -=  arr[i];
            i++;
            j++;
        }
    }

    cout<<mx<<endl;



    return 0;
}