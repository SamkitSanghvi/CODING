#include<bits/stdc++.h>
using namespace std;
int main(){

    int n,m;
    cin>>n>>m;

    int **arr = new int*[n];
    for(int i=0; i<n ; i++)
    {
        arr[i] = new int[m];
    }
    // creation done
    for(int i=0; i<n; i++){ 
        for(int j=0; j<m; j++){ 
            cin>>arr[i][j];
        }
    }

    for(int i=0; i<n; i++){ 
        for(int j=0; j<m; j++){ 
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    
    // Releasing Memory
    for(int i=0; i<n ; i++)
    {
        arr[i] = new int[m];
        delete [] arr[i];
    }
    delete []arr;
    return 0;
}

// 2D array Dynamically
// input/output
// Erasing Memory