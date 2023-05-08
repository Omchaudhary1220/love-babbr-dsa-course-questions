#include<iostream>
using namespace std;
void swap(int* p,int* q){
    int temp=*p;
    *p=*q;
    *q=temp;
}
void swap_alternate(int arr[],int n){
    int i;
    for(i=0;i<n-1;i+=2){
        swap(&arr[i],&arr[i+1]);
    }
}
void printarray(int arr[],int n){
    int i;
    for(i=0;i<n;i++)
    cout<<arr[i]<<" ";
}

int main(){
    int arr[]={10,20,30,40,50};
    int n=sizeof(arr)/sizeof(int);
    swap_alternate(arr,n);
    printarray(arr,n);
    return 0;
}
