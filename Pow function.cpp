#include<bits/stdc++.h>
using namespace std;
int power_fun(int n,int p){
    int ans=1,i;
    for(i=1;i<=p;i++)
    ans=ans*n;
    return ans;
}
int main(){
    int n,power;
    cout<<"Enter number and power:\n";
    cin>>n>>power;
    cout<<power_fun(n,power)<<endl;
    return 0;
} 
