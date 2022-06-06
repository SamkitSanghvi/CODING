// AVP
// Find the Ceil of An Element 
// Celi:- Smallest Element Greater than 5

// First Approach Lower Bound
// Second Approach :- Using Binary Search 

#include<bits/stdc++.h>
using namespace std;
int CeilOfanElement(int arr[],int n,int x){

    int low = 0;
    int high = n-1;
    int res = 0;
    while(low <= high){
        int mid = low + ((high-low)/2);

        if(arr[mid]==x)
        return arr[mid];

        if(x <= arr[mid])
        high = mid - 1;

        else
        low = mid + 1;

        if(arr[mid] > x)
        res = arr[mid];
    }
    return res;
}
int main()
{
    int n,x;
    cin>>n>>x;

    int arr[n];
    for(int i=0;i<n;i++) cin>>arr[i];

    cout<<CeilOfanElement(arr,n,x);


    return 0;
}