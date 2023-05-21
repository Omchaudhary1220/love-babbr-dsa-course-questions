Link:- https://www.codingninjas.com/codestudio/problems/pair-sum_1171154
#include<iostream>
using namespace std;
int pair_sum(int arr[],int n,int k){
    int i=0,j=n-1,count=0;
    while(i<j){
        if(arr[i]+arr[j]==k){
            count++;
            i++;
            j--;
        }
        else if(arr[i]+arr[j]<k){
            i++;
        }
        else{
            j--;
        }
    }
    if(count==0){
        return -1;
    }
    else
    return count;
}
int main(){
    int arr[]={1,2,3,4,5};
    int n=sizeof(arr)/sizeof(int);
    int k=5;
    cout<<"count is "<<pair_sum(arr,n,k);
    return 0;
}
