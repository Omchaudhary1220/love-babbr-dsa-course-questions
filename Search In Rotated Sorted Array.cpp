#include<iostream>
#include<vector>
using namespace std;
int pivotindex(vector<int>& arr,int n);
int binarysearch(vector<int>& arr,int l,int h,int k);
int search(vector<int>& arr, int n, int k);

int main(){
    vector<int> v1;
    v1={7,8,1,2,3};
    int n=v1.size();
    int ans=search(v1,n,2);
    cout<<"ans is "<<ans<<endl;
    return 0;
}
int pivotindex(vector<int>& arr,int n){
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
int binarysearch(vector<int>& arr,int l,int h,int k){
    int mid=-1;
    while(l<=h){
        mid=l+(h-l)/2;
        if(arr[mid]==k){
            return mid;
        }
        else if(k>arr[mid]){
            l=mid+1;
        }
        else{
            h=mid-1;
        }
    }
    return -1;
}

int search(vector<int>& arr, int n, int k)
{
    int pivot=pivotindex(arr,n);
    if(arr[pivot]==k){
        return pivot;
    }
    else if((k>arr[pivot])&&(k<arr[n-1])){
        return binarysearch(arr,pivot,n-1,k);
    }
    else{
        return binarysearch(arr,0, pivot-1,k);
    }
}

