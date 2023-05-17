//both array is sorted

#include<bits/stdc++.h>
using namespace std;

vector<int> intersection_array(int arr1[],int arr2[],int n,int m);
vector<int> intersection_array1(int arr1[],int arr2[],int n,int m);
int main(){
    int arr[]={7,9,9};
    int arr1[]={6,7,7,7,9,9,9};
    int n1=sizeof(arr)/sizeof(int);
    int n2=sizeof(arr1)/sizeof(int);
   vector<int>v1=intersection_array1(arr,arr1,n1,n2);
   for(int i=0;i<v1.size();i++)
   cout<<v1[i]<<" ";
    return 0;
}

//Brute- force solution
vector<int> intersection_array(int arr1[],int arr2[],int n,int m){
    int i,j,temp;
    vector<int> v1;
    for(i=0;i<n;i++){
        temp=arr1[i];
        for(j=0;j<m;j++){
        if(temp==arr2[j]){
            v1.push_back(temp);
            arr2[j]=INT_MIN;
            break;
         }
       }
    }
    return v1;
}
//Optimise solution
vector<int> intersection_array1(int arr1[],int arr2[],int n,int m){
    int i=0,j=0;
    vector<int>v1;
    while(i<n&&j<m){
        if(arr1[i]==arr2[j]){
            v1.push_back(arr2[j]);
            i++;
            j++;
        }
        else if(arr1[i]<arr2[j]){
            i++;
        }
        else{
            j++;
        }
    }
    return v1;
}
