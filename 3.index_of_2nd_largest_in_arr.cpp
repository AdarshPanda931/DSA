#include <bits/stdc++.h>
using namespace std;
 
 //write the function
 
// int funct(int arr[], int n){
//     for (int i=0; i<n; i++){
//         if (arr[i]>arr[i+1])
//         return false;
//     }
//     return true;
// }

int main() {
    int n;
    cout <<"enter size: ";
    cin>>n;
    
    int arr[n];
    cout<<"enter array : ";
    for(int i =0;  i<n; i++){
        cin>>arr[i];
    }
    // cout << funct(arr,n);
    return 0;
}