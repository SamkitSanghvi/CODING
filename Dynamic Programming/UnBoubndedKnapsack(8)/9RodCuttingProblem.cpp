/*
            Rod Cutting Problem
    Input :- Length of Rod---> 8
    length = arr [1,2,3,4,5,6,7,8]
    price =  arr [1,5,8,9,10,17,17,20]

    Output :- Maxmize the Profit.... by cutting the rod into the parts
*/

/*
Same as Unbounded Knapsack.... No Difference is there for
Input may be different..
*/
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n; // Enter the size of array && Length of the Rod...

    int len[n],price[n];
    for(int i=0; i<n; i++)
        cin>>len[i];  //len of the rod
    
    for(int i=0; i<n; i++)
        cin>>price[i]; //price of the rod of that part


    return 0;
}