// KK
// Quick Sort
// Choose any element as pivot after firtst pass
// all the element < pivot will be on LHS
// ans element > pivot will be RHS 
#include<bits/stdc++.h>
using namespace std;
void quick(vector<int> &v,int lo,int hi){
    if(lo>=hi)
        return;
    int s = lo;
    int e = hi;
    // int mid = (s+e)/2;
    int pivot = v[hi];

    while(s<=e){ 
        // If it is Sorted it will not swaped
        while(v[s] < pivot){
            s++;
        }

        while(v[e] > pivot){
            e--;
        }
        
        if(s<=e){ 
            swap(v[s], v[e]);
            s++;
            e--;
        }
    }

    // Now pivot is correct index
    quick(v,lo,e);
    quick(v,s,hi);
}
int main(){

    int n;
    cin>>n;

    vector<int> v(n);
    for(int i=0;i<n;i++)
        cin>>v[i];
    
    quick(v,0,n-1);

    for(int i=0;i<n;i++)
        cout<<v[i]<<" ";


    return 0;
}