#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int n;
    cout<<"enter size: ";
    cin>>n;
    
    int arr[n];
    cout<<"enter array : ";
    for(int i =0;  i<n; i++){
        cin>>arr[i];
    }
    
    cout<<"your array is : ";
    for(int i =0;  i<n; i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}