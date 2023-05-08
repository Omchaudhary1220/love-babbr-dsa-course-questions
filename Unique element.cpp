#include<iostream>
using namespace std;
int unique_element(int arr[],int n){
    int i,ans=0;
    for(i=0;i<n;i++){
        ans=ans^arr[i];
    }
    return ans;
}
int main(){
    int arr[]={10,30,20,40,30,10,20};
    int n=sizeof(arr)/sizeof(int);
    cout<<unique_element(arr,n)<<endl;
    return 0;
}
