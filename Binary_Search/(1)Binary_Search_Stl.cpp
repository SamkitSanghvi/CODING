// TUF
// Binary Search With Stl
// binary_search(first_iterator,last_iterator,element)
// log(N)

// Lower Bound is that stl which rerutn 1st ocurrence of element if it is occur and if doesnt occur iterearr pointing immediate next greater of the given element
// lower_bound(first_iterator,last_iterator,element)
// log(N)

// upper bound is that stl which always  return next greater occurence of element 
// upper_bound(first_iterator,last_iterator,element) 
// log(N)
#include<bits/stdc++.h>
using namespace std;
int main()
{   
    int arr[] = {2,4,9,10,13,15};

    bool res = binary_search(arr,arr+5,3);
    cout<<res<<endl; //false

    double a1 = lower_bound(arr,arr+5,4) - arr;
    cout<<a1<<endl; // 1

    double a2 = lower_bound(arr,arr+5,8) - arr;
    cout<<a2<<endl; // 2

    double a3 = lower_bound(arr,arr+5,12) - arr;
    cout<<a3<<endl; //4


    cout<<"Upper bound"<<endl;
    int b1 = upper_bound(arr,arr+5,2)-arr;
    cout<<b1<<endl; //1
    int b2 = upper_bound(arr,arr+5,5)-arr;
    cout<<b2<<endl; //2
    int b3 = upper_bound(arr,arr+5,10)-arr;
    cout<<b3<<endl; //4

    return 0;
}