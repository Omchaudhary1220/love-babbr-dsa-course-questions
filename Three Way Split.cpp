Link:- https://www.codingninjas.com/codestudio/contests/love-babbar-contest-l/3189127/problems/15017?leftPanelTab=0
#include <bits/stdc++.h> 
//Brute-force solution
long long threeWaySplit(int n, vector<int> arr){
      long long sum1=0,sum2=0,ans=0;
      int i,j;
      if(n==1){
          return 0;
      }
      for(i=0;i<n;i++){
          sum1=arr[0];
          sum2+=arr[n-i-1];
          for(j=1;j<n-i;j++){
              if(sum1==sum2){
                  ans=sum1;
              }
              else if(sum1>sum2){
                 break;
              }
              sum1+=arr[j];
          }
      }
      return ans;
}
