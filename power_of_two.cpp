#include<iostream>
using namespace std;
int ispower(int n){
    if(n<=0){
        return 0;
    }
    else{
        return (n&(n-1))==0;
    }
}
int main(){
    int n;
    cout<<"enter number:";
    cin>>n;
    if(ispower(n)){
        cout<<"Yes"<<endl;
    }
    else
    cout<<"No"<<endl;
    return 0;
}
