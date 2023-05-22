Link:- https://www.codingninjas.com/codestudio/problems/cooking-ninjas_1164174
#include <bits/stdc++.h> 
int ispossible(vector<int> &rank,int n,int mid,int m){
    long long int sum=0;
    int count=0,k=1,i;
    for(i=0;i<n;i++){
        int temp=rank[i];
        while(sum<=mid){
            if((sum+(k*temp))<=mid){
                sum+=(k*temp);
                count++;
                k++;
            }
            else{
                sum=0;
                k=1;
                break;
            }
        }
        if(count>=m){
            return 1;
        }
    }
    if(count>=m){
        return 1;
    }
    else{
        return 0;
    }
}

int minCookTime(vector<int> &rank, int m){
    int s=0,e=10*(m*(m+1))/2;
    int n=rank.size();
    long long int mid;
    int ans=-1;
    mid=s+(e-s)/2;
    while(s<=e){
       if(ispossible(rank,n,mid,m)){
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
