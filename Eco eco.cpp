Link:- https://www.spoj.com/problems/EKO/
#include <iostream>
using namespace std;
long long int search(long long int arr[],long long int n,long long int m);
int ispossible(long long int arr[],long long int mid,long long int n,long long int m);

int main() {
    long long int n,m;
    cin>>n>>m;
    long long arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    long long int ans=search(arr,n,m);
    cout<<"ans is "<<ans<<endl;
	return 0;
}

int ispossible(long long int arr[],long long int mid,long long int n,long long int m){
    long long int sum=0,i;
    for(i=0;i<n;i++){
        if(arr[i]<=mid){
            continue;
        }
        else{
            sum+=(arr[i]-mid);
        }
        if(sum>m){
            return 2;
        }
    }
    if(sum==m){
        return 1;
    }
    else{
        return 0;
    }
}
long long int search(long long int arr[],long long int n,long long int m){
    long long int s=0;
   long long int e=*max_element(arr,arr+n);
    long long int mid;
    mid=s+(e-s)/2;
    long long int ans=-1;
    while(s<=e){
        int flag=ispossible(arr,mid,n,m);
        if(flag==1){
            ans=mid;
            s=mid+1;
        }
        else if(flag==2){
            s=mid+1;
        }
        else{
            e=mid-1;
        }
        mid=s+(e-s)/2;
    }
    return ans;
}
