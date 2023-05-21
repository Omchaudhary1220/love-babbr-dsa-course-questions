Link:- https://www.codingninjas.com/codestudio/problems/pair-sum_1171154
#include<iostream>
using namespace std;
void pair_sum(int arr[],int n,int k){
    int i,j;
    for(i=0;i<n;i++){
        for(j=i+1;j<n;j++){
            if(arr[i]+arr[j]==k){
                cout<<i<<" "<<j<<endl;
            }
        }
    }
    
}
int main(){
    int arr[]={1,2,3,4,5};
    int n=sizeof(arr)/sizeof(int);
    int k=5;
    pair_sum(arr,n,k);
    return 0;
}
