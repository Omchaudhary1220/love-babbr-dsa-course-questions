#include<bits/stdc++.h>
using namespace std;
void swap(char* p,char* q){
    char temp=*p;
    *p=*q;
    *q=temp;
}
//using extra space
bool palidrome(string str){
    string s=str;
    reverse(s.begin(),s.end());
    if(s==str){
        return 1;
    }
    else{
        return 0;
    }  
}

//without using extra space 
bool pal(string str){
    int i=0,j=str.size()-1;
    while(i<j){
        if(str[i++]!=str[j--]){
            return 0;
        }
    }
    return 1;
}
int main(){
    string str;
    cout<<"Enter the string: ";
    cin>>str;
    cout<<"is palidrome: "<<pal(str)<<endl;
    return 0;
}
