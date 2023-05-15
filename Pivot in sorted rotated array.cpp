//smallest element in array is known as pivot(in our case).
#include<iostream>
using namespace std;
int pivotindex(int arr[],int n){
    int l=0,h=n-1;
    int mid;
    mid=l+(h-l)/2;
    while(l<h){
        if(arr[mid]>=arr[0]){
            l=mid+1;
        }
        else{
            h=mid;
        }
      mid=l+(h-l)/2;
    }
    return mid;
}
int main(){
    int arr[]={3,8,10,17,1};
    int n=sizeof(arr)/sizeof(int);
    int index=pivotindex(arr,n);
    cout<<"ans is "<<index<<endl;
    return 0;
}
