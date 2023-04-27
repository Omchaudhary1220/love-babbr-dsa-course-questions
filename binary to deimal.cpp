//binary to decimal
#include<iostream>
#include<math.h>
using namespace std;
int binary_to_decimal(int n);
int main(){
	int n,ans;
	cout<<"Enter the binary number: ";
	cin>>n;
	ans=binary_to_decimal(n);
	cout<<"decimal of "<<n<<" is "<<ans<<endl;
	return 0;
}
int binary_to_decimal(int n){
	int val=0,i=0;
	int digit;
	while(n!=0){
		digit=n%10;
		val=digit*pow(2,i)+val;
		i++;
		n=n/10;
	}
	return val;
	
}
