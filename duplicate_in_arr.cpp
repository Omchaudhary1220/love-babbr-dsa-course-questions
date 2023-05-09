#include<bits/stdc++.h>
using namespace std;
int duplicate_in_array(int arr[],int n){
    int i,ans=0;
    for(i=0;i<n;i++){
        ans=ans^arr[i];
    }
    for(i=1;i<n;i++){
        ans=ans^i;
    }
    return ans;
}
int main(){
    int arr[]={1,2,3,4,5,6,7,8,3};
    int n=sizeof(arr)/sizeof(int);
    cout<<"ans is "<<duplicate_in_array(arr,n)<<endl;
    return 0;
}
