// CH
// Pointers with Char Array

// In case of char array cout function return the whole value of char array
// In case of int array cout function return the address of the 1st index of the array
#include<bits/stdc++.h>
using namespace std;
int main(){

    int arr[5] = {1,2,3,4,5};
    char ch[6] = "abcde";

    cout<<arr<<endl;
    cout<<*ch + 1<<endl;

    char *c = &ch[0];
    cout<<c<<endl; // Printing the Entiring String 

    char ch1 = 'x';
    char *p2 = &ch1;
    cout<<p2<<endl;


    return 0;
}