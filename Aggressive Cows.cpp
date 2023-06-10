Link:-https://www.codingninjas.com/codestudio/problems/aggressive-cows_1082559?source=youtube&campaign=love_babbar_codestudio2&utm_source=youtube&utm_medium=affiliate&utm_campaign=love_babbar_codestudio2
#include<bits/stdc++.h>
using namespace std;
int aggressiveCows(vector<int> &stalls, int k);
bool isPossible(vector<int> &stalls, int k,int mid);
int main(){
	vector<int> stalls={0,3,4,7,10,9};
	int k=4;
	cout<<"ans is "<<aggressiveCows(stalls,k)<<endl;
	return 0;
	
}

bool isPossible(vector<int> &stalls, int k,int mid){
    int Cowcount=1;
    int lastpos=stalls[0];
    for(int i=0;i<stalls.size();i++){
        if(stalls[i]-lastpos>=mid){
            Cowcount++;
            if(Cowcount==k){
                return true;
            }
            lastpos=stalls[i];
        }
    }
    return false;
}
int aggressiveCows(vector<int> &stalls, int k)
{
    sort(stalls.begin(),stalls.end());
    int ans=-1;
    int s=0,e=stalls[stalls.size()-1]-stalls[0];
    int mid=s+(e-s)/2;
    while(s<=e){
        if(isPossible(stalls,k,mid)){
            ans=mid;
            s=mid+1;
        }
        else{
            e=mid-1;
        }
      mid=s+(e-s)/2;
    }
    return ans;
}
