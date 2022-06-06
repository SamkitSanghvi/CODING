// KK
// Merge Sort

// Divide array into 2 parts 
// Get both part sorted via recurison
// merge two sorted arrays


// At every level n elements are merget (nlogn)
#include<bits/stdc++.h>
using namespace std;
vector<int> mergeee(vector<int> left,vector<int> right){
    vector<int> ans(left.size()+right.size());
    int i = 0,j=0,k=0;

    while(i < left.size() and j < right.size()){
        if(left[i] < right[j]){ 
            ans[k] = left[i];
            i++; k++;
        }

        else{
            ans[k] = right[j];
            j++;
            k++;
        }
    }

    while(i < left.size()){
        ans[k] = left[i];
        i++; k++;
    }
    while(j < right.size()){
        ans[k] = right[j];
        j++; k++;
    }

    return ans;
}
vector<int> mergeSort(vector<int> arr){
    if(arr.size() <= 1)
        return arr;
    
    int mid = (arr.size()  ) / 2;
    vector<int> left,right;
    for(int i=0;i<mid;i++)
        left.push_back(arr[i]);
    for(int i=mid;i<arr.size();i++)
        right.push_back(arr[i]);

    left = mergeSort(left);
    right =mergeSort(right);
    return mergeee(left,right);
}
int main(){

    int n;
    cin>>n;
    vector<int> arr(n);
    for(int i=0; i<n; i++)
        cin>>arr[i];

    vector<int> ans = mergeSort(arr);
    for(auto i : ans){ 
        cout<<i<<" ";
    }
    cout<<endl;
    for(auto i : arr){ 
        cout<<i<<" ";
    }

    return 0;
}