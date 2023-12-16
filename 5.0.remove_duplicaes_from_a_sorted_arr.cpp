#include <bits/stdc++.h>
using namespace std;
 
//Naive method

int funct(int arr[],int n){
    int temp[n]; //temporary array
    temp[0]=arr[0];//copy first element to temp
    int res=1;//initialise the size of temp

    for(int i=1;i<n;i++){  //now we start from 2nd element
        if (temp[res-1]!=arr[i]){ //check if it is not same as the last copied element
            temp[res]=arr[i];//copy  the new element to next location in temporary arr
            res++;//increment result
        }
    }
    for(int i=0;i<res;i++){//to print the wanted array with no duplicates.
        arr[i]=temp[i];//copy the temporary array content to original array
    }
    return res;
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

    int newSize = funct(arr,n);
    cout<<"new size is : "<<newSize<<endl;

    cout<<"updated array is : ";
    for(int i =0;  i<newSize; i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}