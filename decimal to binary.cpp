#include<iostream>
#include<math.h>
using namespace std;
int decimal_to_bianry(int n);
int main(){
	int n,ans;
	cout<<"Enter the decimal number: ";
	cin>>n;
	ans=decimal_to_bianry(n);
	cout<<"Binary of "<<n<<" is "<<ans<<endl;
	return 0;
}
int decimal_to_bianry(int n){
	int bit=0,i=0;
	while(n!=0){
		bit=((n&1)*pow(10,i))+bit;
		n=n>>1;
		i++;
	}
	return bit;
	
}
