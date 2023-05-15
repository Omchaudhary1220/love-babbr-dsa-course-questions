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
int main()
{
    int n;
    cout<<"Enter the value:";
    cin>>n;
    cout<<"ans is "<<SqureRoot(n)<<endl;
    
    return 0;
}
