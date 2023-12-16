#include <bits/stdc++.h>
using namespace std;
 
 //write the function
 
void funct(int arr[], int n){
    int i =0;
    int j =n-1;
    while(i<=j){
        swap(arr[i],arr[j]);
        i++;
        j--;
    }
}

int main() {
    int n;
    cout <<"enter size: ";
    cin>>n;
    
    int arr[n];
    cout<<"enter array : ";
    for(int i =0;  i<n; i++){
        cin>>arr[i];
    }

    funct(arr,n);

    cout<<"reversed array : ";
    for(int i =0;  i<n; i++){
        cout<<arr[i]<<"";
    }

     return 0;
}