// KK
// Sum of Digit
// n-- vs --n
// n-- will pass the number first and then substract it
#include<bits/stdc++.h>
using namespace std;
int sumOfDigits(int n){
    if(n == 0) 
        return 0;
    return + n%10 + sumOfDigits(n/10) ;
}
int prodOfDigits(int n){
    if(n == 0) 
        return 1;
    return  n%10 * sumOfDigits(n/10) ;
}
int main(){

    cout<<sumOfDigits(1234)<<endl;
    cout<<prodOfDigits(1234)<<endl;

}