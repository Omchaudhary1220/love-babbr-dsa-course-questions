#include<iostream>
using namespace std;
//brute-force solution linear search.
int SqureRoot(int n){
	int i,ans;
	for(i=0;i<=n;i++){
		if(i*i==n){
			return i;
		}
		ans=i-1;
		if(i*i>n){
			return ans;
		}
	}
}
//optimal solution using binary search O(logn)
int Sqaureroot(int n){
   int s=0,e=n;
   int mid,ans=-1,square;
   while(s<=e){
       mid=(s+e)/2;
       square=mid*mid;
       if(square==n){
           return mid;
       }
       else if(square<n){
           ans=mid;
           s=mid+1;
       }
       else{
           e=mid-1;
       }
   }
   return ans;
}
int main()
{
    int n;
    cout<<"Enter the value:";
    cin>>n;
    cout<<"ans is "<<SqureRoot(n)<<endl;
    
    return 0;
}
