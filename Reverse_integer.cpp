#include<iostream>
#include<climits>
using namespace std;
int reverse_int(int n){
    int ans=0,digit;
    while(n!=0){
        digit=n%10;
        if(ans>INT_MAX/10||ans<INT_MIN/10){
            return -1;
        }
        ans=(ans*10)+digit;
        n/=10;
    }
    return ans;
}
int main(){
    int n;
    cout<<"Enter number:";
    cin>>n;
    cout<<reverse_int(n)<<endl;
    return 0;
}
