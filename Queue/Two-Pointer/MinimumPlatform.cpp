// TUF
// Minimum Platform Required
// Given an arrival and Depature time of all the train find the minimum number of platform required for railway station that no train kept waiting

// Start = [12,5,5:50,200,700,850]
// End = [600,550,700,500,900,1000]

// Ask that Starting time is Sorted or Not
// If not Sorted (sort starting time and Ending Time)

// TC -> (nlogn) + o(n)
#include<bits/stdc++.h>
using namespace std;
int main(){

    int n;
    cin>>n;

    int start[n],End[n];
    for(int i=0;i<n;i++)
        cin>>start[i];
    
    for(int i=0;i<n;i++)
        cin>>End[i];
    
    sort(start,start+n);
    sort(End,End+n);

    int count = 1;
    int plat = 1,i=0,j=0;
    while(i<n and j<n){
        if(start[i] <= End[j]){
            plat++;
            i++;
        }
        else if(start[i] > End[j]){
            plat--;
            j++;
        }
        if(plat > count)
            count = plat;
    }

    cout<<count<<endl;

    return 0;
}