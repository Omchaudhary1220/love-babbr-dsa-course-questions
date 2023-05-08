#include<iostream>
using namespace std;
int ones_complement(int n){
    int mask=0,m=n;
    while(m!=0){
        mask=(mask<<1)|1;
        m=m>>1;
    }
    return (~n)&mask;
}
int main(){
    int n;
    cout<<"enter number:";
    cin>>n;
    cout<<ones_complement(n)<<endl;
    return 0;
}
