// AVP
// Maximum of All SubArray of Size K

// Problem Statment
// Array is Given and Window size is Given
// 1 3 -1 -3 5 3 3 6 7 

// We have to return an Array Containin a maximum of all subarray of Size k
// 3 3 5 5 5 6 7 

// Maintain a Queue in that q.front() will be the largest element of the size k
#include<bits/stdc++.h>
using namespace std;
int main(){

    int n,k;
    cin>>n>>k;
    
    int arr[n];
    vector<int> temp;
    for(int i=0;i<n;i++)
    cin>>arr[i];

    int i=0;
    int j=0;
    queue<int> q;
    int ans = 0;
    while(j<n){
        while(!q.empty() and (q.front() < arr[j]) )
        q.pop();
        q.push(arr[j]);
    
        if(j-i+1 < k)
        j++;

        if(j-i+1 == k){
            
            temp.push_back(q.front());
            if(arr[i] == q.front())
            q.pop();

            i++;
            j++;
        }
    }
    cout<<temp.size()<<endl;
    for(int i=0;i<temp.size();i++){ 
        cout<<temp[i]<<" ";
    }

    return 0;
}