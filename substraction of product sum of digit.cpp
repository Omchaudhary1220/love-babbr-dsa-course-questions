#include<iostream>
using namespace std;
int Sumproduct_subs(int n){
    int digit,sum=0,mul=1;
    while(n>0){
      digit=(n%10);
      sum+=digit;
      if(digit!=0)
      mul*=digit;
      n/=10;
    }
    return mul-sum;
}
int main(){
	int n;
	cout<<"Enter the number: ";
	cin>>n;
	cout<<Sumproduct_subs(n)<<endl;
    return 0;
}
