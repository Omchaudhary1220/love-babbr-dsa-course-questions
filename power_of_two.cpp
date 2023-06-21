#include<iostream>
using namespace std;
//Brute-force solution time complexity O(n)
int ispower (int n)
{
  int ans = 0;
  for (int i = 0; i <=n; i++)
    {
      ans =pow(2,i);
      if(ans==n){
          return 1;
      }
      else if(ans>n){
          return 0;
      }
    }
    return 0;
}
//optimisied solution time complexity O(1)
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
