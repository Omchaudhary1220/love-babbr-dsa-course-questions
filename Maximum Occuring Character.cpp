Link:- https://practice.geeksforgeeks.org/problems/maximum-occuring-character-1587115620/1
#include<bits/stdc++.h>
using namespace std;
char getMaxOccuringChar(string str){
    int i=0;
    int arr[26]={0};
    int number=-1;
    int max=INT_MIN;
    int ans=-1;
    for(i=0;i<str.length();i++){
        number=str[i]-'a';
        arr[number]++;
    }
    for(i=0;i<26;i++){
        if(arr[i]>max){
            ans=i;
            max=arr[i];
        }
    }
    return 'a'+ans;
}
int main(){
    string str="aaaaa";
    cout<<getMaxOccuringChar(str)<<endl;
    return 0;
}
