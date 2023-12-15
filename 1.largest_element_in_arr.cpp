#include <bits/stdc++.h>
using namespace std;
int largest(int arr[],int n){
    int res=0;
    for(int i=0;i<n;i++){
        if (arr[i]>arr[res])
        res=i;
    }
    return res;
}
int main(){
    int n;
    cout<<"enter size: ";
    cin>>n;
    
    int arr[n];
    cout<<"enter array : ";
    for(int i =0;  i<n; i++){
        cin>>arr[i];
    }
    int index= largest(arr,n);
    cout<<"index of largest element = "<<index<<endl;
    return 0;
}