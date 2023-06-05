#include<iostream>
using namespace std;
void swap(char *p,char *q){
    char temp=*p;
    *p=*q;
    *q=temp;
}
string reverse(string str){
    int n=str.size();
    for(int i=0;i<=str.size()/2;i++){
        swap(&str[i],&str[n-i-1]);
    }
    return str;
}
int main(){
    string name="hello world";
    name=reverse(name);
    cout<<name<<endl;
    return 0;
}
