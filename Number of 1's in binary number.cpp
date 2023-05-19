//Count of 1 bit in a binary number
#include<iostream>
using namespace std;
int number_of_ones(int n);
int main(){
	int n,ans;
	cout<<"Enter the number: ";
	cin>>n;
	ans=number_of_ones(n);
	cout<<"Number of 1's in "<<n<<" is = "<<ans<<endl;
	return 0;
}
int number_of_ones(int n){
	int count=0;
	while(n!=0){
		if(n&1){
		count++;
	    }
		n=n>>1;
	}
	return count;
}
