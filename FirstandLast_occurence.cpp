//The brute-force solution is linear search from start to first element and last to first element.
#include<iostream>
using namespace std;
int firstOcc(int arr[],int n,int k){
    int mid,first=0,last=n-1,ans=-1;
    mid=first+(last-first)/2;
    while(first<=last){
        if(arr[mid]==k){
            ans=mid;
            last=mid-1;
        }
        else if(k>arr[mid]){
            first=mid+1;
        }
        else if(k<arr[mid]){
            last=mid-1;
        }
        mid=first+(last-first)/2;
    }
    return ans;
}
int lastOcc(int arr[],int n,int k){
    int mid,first=0,last=n-1,ans=-1;
    mid=first+(last-first)/2;
    while(first<=last){
        if(arr[mid]==k){
            ans=mid;
            first=mid+1;
        }
        else if(k>arr[mid]){
            first=mid+1;
        }
        else if(k<arr[mid]){
            last=mid-1;
        }
        mid=first+(last-first)/2;
    }
    return ans;
}

int main(){
    int arr[]={1,2,3,4,4,5};
    int n=(sizeof(arr)/sizeof(int));
    int k=4;
    int ans=firstOcc(arr,n,k);
    cout<<"First occurence of "<<k<<" is "<<ans<<endl;
    ans=lastOcc(arr,n,k);
    cout<<"Last occurence of "<<k<<" is "<<ans<<endl;
    return 0;
}
