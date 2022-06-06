// TUF
// MEdian of 2 Sorted Array of 2 Different Size
// IF the resultant array length is odd just return 1 element 
// If it is even return median of 2 middle number 

// Input
// Two array of size m and n
// Nums1 = [1,2];
// Nums2 = [2];
// Output = 2.0000
// Explanation :- [1,2,3] and the median is 2

// Basic Approach
// Merge the 2 Vector ans then Sort the Vector and find the Median
// TC--> O(m+n) + O((n+m)log(n+m))
// SC --> O(1)

// Upgraded Approach
// Use Merge Sort Technique..... to merge the 2 array
// TC --> O(m+n);
// sc --> O(m+n);

// Upgraded version of Merge sort
// We know the size of both array basically we want the particualt number of the element we can keep the counter to that particular number of element and we can get the answer by that we can reduce the space Complexcity
// TC --> O(m+n);
// sc --> O(1);


// More Upgraded Solution
// l1 < r2;
// l2 < r1
#include<bits/stdc++.h>
using namespace std;
int main(){

    int n,m;
    cin>>n>>m;

    int arr[n],arr2[m];
    for(int i=0; i<n; i++)  
        cin>>arr[i];
    
    for(int i=0; i<m; i++) 
        cin>>arr2[i];
    
    int lo = 0;
    int hi = n;
    int l1=0,l2=0,r1=0,r2=0,ans=0;
    while(lo < hi){
        int cut1 = lo + (hi-lo)/2;
        int cut2 = (n+m)/2 - cut1;

        if(cut1==0){
            l1 = INT_MIN;
        }
        else
        l1 = arr[cut1-1];

        if(cut2==0){ 
            l2 = INT_MAX;
        }
        else
            l2 = arr2[cut2-1];

        if(cut1 == n)
            r1 = INT_MAX;
        else
            r2 = arr[cut1];
        
        if(cut2==0)
            r2 = INT_MAX;
        else
            r2 = arr2[cut2];

        if(l1 > r2)
            hi = cut1 - 1;
        else if(l2 > r1)
            lo = cut1 + 1;
        else{
            if((n+m)%2==0)
            ans = (max(l1,l2) + min(r1,r2))/2;

            else
            ans = min(r1,r2);
        }

    }

    cout<<ans<<endl;



    return 0;
}