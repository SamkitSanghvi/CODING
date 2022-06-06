// AVP
// Rain Water Tapping
// Input :- An Array is (Denoting the Heights of the Building)
// arr [] :- 3 0 0 2 0 4
// Basically We have to Find total unit of Water that can be filled between the Building which is equal to Water on Each Building....


// Approach
// Create Array of greater element to Left and Right Side of the Element...

#include<bits/stdc++.h>
using namespace std;
int main()
{ 
    int n;
    cin>>n;

    vector<int> v(n);
    for(int i=0; i<n; i++) cin>>v[i];
    vector<int> left(n);
    vector<int> right(n);

    // Approach 1;
    // for(int i=0;i<n;i++){
    // left[i] = v[max_element(v.begin(),v.begin()+i + 1) - v.begin()];
    // right[i] = v[max_element(v.begin()+i,v.end()) - v.begin()];
    // }

    // Approach 2
    left[0] = v[0];
    for(int i = 1; i <n;i++)
    left[i] = max(v[i],left[i-1]);

    right[n-1] = v[n-1];
    for(int i=n-2;i>=0;i--)
    right[i] = max(v[i],right[i+1]);


    int sum = 0;
    for(int i=0;i<n;i++){
        sum += min(left[i],right[i]) - v[i];
    }

    cout<<sum<<endl;

    return 0;
}