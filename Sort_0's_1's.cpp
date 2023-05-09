#include<iostream>
using namespace std;
void printarr(int arr[],int n){
    cout<<"\nArray is ";
    for(int i=0;i<n;i++)
    cout<<arr[i]<<" ";
}
void swap(int* p,int* q){
    int temp=*p;
    *p=*q;
    *q=temp;
}
void zero_one_sort(int arr[],int n){
    int i=0,j=n-1;
    while(i<j){
        while(arr[i]==0&&i<j){
            i++;
        }
        while(arr[j]==1&&i<j){
            j--;
        }
        if(i<j){
            swap(&arr[i],&arr[j]);
            i++;
            j--;
        }
    }
    printarr(arr,n);
}
int main(){
    int arr[]={1,0,1,0,0,1,0,1,1};
    int n=sizeof(arr)/sizeof(int);
    printarr(arr,n);
    zero_one_sort(arr,n);
    return 0;
}
