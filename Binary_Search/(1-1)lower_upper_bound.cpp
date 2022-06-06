// TUF
//1.  Find the First occurence of the Element in the Sorted Array. If it does not exist,print -1

// 2. Find the Last Occurence of the Element in the Sorted Array. If it does not exists,print -1 


// 3. Find the largest element smaller than X in a sorted array. If it does not exist,print -1

// 4. Find the smallest element greater than X in a sorted array. If it does not exist print -1;
#include<bits/stdc++.h>
using namespace std;
int main()
{
    // First Occurence 
    int arr[] = {1,4,4,4,4,4,4,4,9,9};
    int size = sizeof(arr)/sizeof(arr[0]);
    cout<<size<<endl;
    int ind = lower_bound(arr,arr+size,10) - arr;
    
    if(ind!=size and arr[ind]==10) cout<<ind<<endl;
    else cout<<-1<<endl;


    cout<<"Last Ocurrence";
    int in = upper_bound(arr,arr+size,4) - arr;
    in--;

    if(in>=0 and arr[in]==4) cout<<in<<endl;
    else cout<<-1<<endl;

    // Largest element smaller than x
    cout<<"large";
    int i = lower_bound(arr,arr+size,4) - arr;
    i--;
    if(i>=0 and arr[i] < 4) cout<<arr[i]<<endl;
    else cout<<-1<<endl;

    // Smallest Element greater than X
    int j = upper_bound(arr,arr+size,4) - arr;

    if(i<size) cout<<arr[j]<<endl;
    else cout<<-1<<endl;
    return 0;
}
