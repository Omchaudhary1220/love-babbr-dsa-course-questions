#include<bits/stdc++.h>
using namespace std;
int factorial(int n){
    if(n==1||n==0){
        return 1;
    }
    else 
    return n*factorial(n-1);
}
int nCr(int n,int r){
    int nom=factorial(n);
    int denom=factorial(n-r);
    return nom/denom;
    
}
int main(){
    int n,r;
    cin>>n>>r;
    cout<<nCr(n,r)<<endl;
    return 0;
}
