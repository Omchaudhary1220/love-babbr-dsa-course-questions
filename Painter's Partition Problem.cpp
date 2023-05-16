Link:- https://www.codingninjas.com/codestudio/problems/painter's-partition-problem_1089557?source=youtube&campaign=love_babbar_codestudio2&utm_source=youtube&utm_medium=affiliate&utm_campaign=love_babbar_codestudio2&leftPanelTab=0

#include<iostream>
#include<vector>
using namespace std;

bool isPossible(vector<int> &boards, int k,int n,int mid){
    int painterCount=1;
    int boardUnit=0;
    for(int i=0;i<n;i++){
        if(boardUnit+boards[i]<=mid){
           boardUnit+=boards[i]; 
        }
        else{
            painterCount++;
            if(painterCount>k||boards[i]>mid){
                return false;
            }
            boardUnit=boards[i];
        }
    }
    return true;
}
int findLargestMinDistance(vector<int> &boards, int k)
{
    int s=0,sum=0;
    int ans=-1;
    int n=boards.size();
    for(int i=0;i<n;i++){
        sum+=boards[i];
    }
    int e=sum;
    int mid=s+(e-s)/2;
    while(s<=e){
        if(isPossible(boards,k,n,mid)){
            ans=mid;
            e=mid-1;
        }
        else{
            s=mid+1;
        }
        mid=s+(e-s)/2;
    }
    return ans;
}
int main(){
   vector<int> boards={10,20,30,40};
   int k=2;
   cout<<"ans is "<<findLargestMinDistance(boards,k)<<endl;
   return 0;
}

