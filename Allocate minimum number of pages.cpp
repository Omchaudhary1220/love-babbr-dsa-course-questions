Link:- https://practice.geeksforgeeks.org/problems/allocate-minimum-number-of-pages0937/0
#include<iostream>
#include<vector>
using namespace std;
bool isPossible(vector<int> arr,int n,int m,int mid){
	int studentCount=1;
	int pageSum=0;
	for(int i=0;i<n;i++){      
		if(pageSum+arr[i]<=mid){
			pageSum+=arr[i];
		}
		else{
			studentCount++; 
			if(studentCount>m||arr[i]>mid){
				return false;
			}
			pageSum=arr[i];
		}
	}
	return true;
}
int allocateBooks(vector<int> arr,int n,int m){
    if(n<m){
        return -1;
    }
	int s=0;
	int sum=0; 
	int ans=-1;
	for(int i=0;i<n;i++){
		sum+=arr[i];
	}
	int e=sum;
	int mid=s+(e-s)/2;
	while(s<=e){
		if(isPossible(arr,n,m,mid)){
			ans=mid;
			e=mid-1;
		}
		else{                                                                   
			s=mid+1;
		}
	mid=s+(e-s)/2;
	}
	return ans;
}
int main(){
	vector<int> v1={2,8,8,4,5};
	int n=v1.size();
	int m=4;
	cout<<"ans is "<<allocateBooks(v1,n,m)<<endl;
	return 0;
}
