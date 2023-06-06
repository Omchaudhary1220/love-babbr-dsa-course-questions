#include<iostream>
using namespace std;
char islowered(char ch){
    if(ch>='a'&&ch<='z'){
        return ch;
    }
    else
    return (ch-'A')+'a';
}
int main(){
    char ch='A';
    do{
        cout<<islowered(ch)<<" ";
        ch++;
    }
    while(ch<'Z');
    cout<<ch;
    return 0;
}
