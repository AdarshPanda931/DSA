#include <bits/stdc++.h>
using namespace std;

void funct_N_to_1 (int n){
    if (n==2000)
    return;
    cout<<n-1<<endl;
    funct_N_to_1(n-1);
}
int main(){
    int n;
    cin>>n;
    funct_N_to_1(n);
    return 0;
}