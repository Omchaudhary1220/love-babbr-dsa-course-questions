#include<iostream>
#include<math.h>
using namespace std;
long long int decimal_to_binary(long long int  n);
int main(){
	long long int n,ans;
	cout<<"Enter the decimal number: ";
	cin>>n;
	ans=decimal_to_binary(n);
	cout<<"Binary of "<<n<<" is "<<ans<<endl;
	return 0;
}
long long int decimal_to_binary(long long int n){
	long long int bit=0,i=0;
	if(n<0){
	n=pow(2,16)+n;
	}
	while(n!=0){
		bit=((n&1)*pow(10,i))+bit;
		n=n>>1;
		i++;
	}
	return bit;
	
}
