Link:- https://www.codingninjas.com/codestudio/contests/love-babbar-contest-l/3189127/problems/14463?leftPanelTab=0
#include <bits/stdc++.h> 
using  namespace std;
int findMaxX(int n, vector<vector<int>> &arr, int B)

{
    int long long sum=0;
    int max_val=0;
    int s=0,e=B;
    for(int i=0;i<arr.size();i++){
        for(int j=1;j<=arr[i][0];j++)
             max_val=max(max_val,arr[i][j]);
    }
    int ans=-1;
    int mid=s+(e-s)/2;
    s=0,e=max_val;
    while(s<=e){
        if(mid>=max_val){
            e=mid-1;
        }
        else if(mid<max_val){
            int sum=0;
            for(int i=0;i<arr.size();i++){
                for(int j=1;j<=arr[i][0];j++){
                    if(arr[i][j]>mid){
                        continue;
                    }
                    sum+=arr[i][j];
        }
    }
        if(sum<=B){
            ans=mid;
            s=mid+1;
        }
        else{
            e=mid-1;
        }
    }

     mid=s+(e-s)/2;

   }
   return ans;
}

int main(){
    vector<vector<int>>arr={{3,20},{3,1,2,3},{3,4,2,3},{3,1,10,2}};
    int n=arr.size();
    int B=20;
    int ans=findMaxX(n,arr,B);
    cout<<"ans is "<<ans<<endl;
    return 0;
}
