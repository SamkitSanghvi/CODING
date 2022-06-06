// Knapsack Using Recursive
/*
    Input :- 
        weight array
        value array 
        W (size of knapsack)
    Output
    maximum Profit
*/

/*
    we have 3 choise 
    if the item weight is less than bag weight weight 
            1. keep
            2. Not to keep;
    else if the weight of the item is Greater than bag weight
            3. Not to Keep
*/

/*
    🌟To check Base Condition:- Think of the smallest valid input 
    In this case W == 0 or n == 0
*/

// T.C-->  O(2^n)
/*
    Example 
    wt = 1,3,4,5
    val = 1 4 5 7
    W = 7

    output -> 9 
*/
#include<bits/stdc++.h>
using namespace std;
int kanpsack(int wt[],int val[],int W,int n){
    if(n==0 or W==0)
        return 0;
    
    if(wt[n-1] <= W){
        return max(val[n-1] + kanpsack(wt,val,W-wt[n-1],n-1)
                                ,kanpsack(wt,val,W,n-1));
    }

    else if(wt[n-1] > W) 
        return kanpsack(wt,val,W,n-1);

}
int main()
{
    int n; // Enter the size of knapsack
    cin>>n;  

    int wt[n],val[n]; // weight array

    for(int i=0;i<n;i++)
        cin>>wt[i]; // enter the weight of each item

    for(int i=0;i<n;i++)
        cin>>val[i]; // enter the value of each item
    
    int W; // Enter Total capacity of Knapsack
    cin>>W;

    cout<<kanpsack(wt,val,W,n)<<endl;

    return 0;
}