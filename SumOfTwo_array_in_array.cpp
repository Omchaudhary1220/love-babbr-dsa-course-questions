Link:- https://www.codingninjas.com/codestudio/problems/sum-of-two-arrays_893186?utm_source=youtube&utm_medium=affiliate&utm_campaign=love_babbar_4&leftPanelTab=1
#include<bits/stdc++.h>
using namespace std;
vector<int> findArraySum(vector<int>&a, int n, vector<int>&b, int m) {
    vector<int>ans;
	int i=n-1,j=m-1,sum=0;
	while(i>=0&&j>=0){
	    sum+=a[i]+b[j];
	    if((sum%10)==sum){
	      ans.insert(ans.begin(),sum);
	      sum=0;
	    }
	    else{
	        ans.insert(ans.begin(),(sum%10));
	        sum=1;
	    }
	    i--;
	    j--;
	}
	while(i>=0){
	    ans.insert(ans.begin(),sum+a[i]);
	    sum=0;
	    i--;
	}
	while(j>=0){
	    ans.insert(ans.begin(),sum+b[j]);
	    sum=0;
	    j--;
	}
	if(sum!=0){
		ans.insert(ans.begin(),sum);
	}
   return ans;
}
void print(vector<int>arr){
   cout<<"Array elements are: ";
   for(int i=0;i<arr.size();i++){
       cout<<arr[i]<<" ";
   }
   cout<<endl;
}
int main(){
    vector<int>a={1,2,3,4};
    vector<int>b={6};
    vector<int>ans=findArraySum(a,a.size(),b,b.size());
    print(ans);
    return 0;
}
