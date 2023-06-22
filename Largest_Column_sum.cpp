#include<bits/stdc++.h>
using namespace std;
int largestColumnSum(int arr[][4],int n,int m){
    int max=INT_MIN;
    int max_index=-1;
    for(int i=0;i<m;i++){
        int sum=0;
        for(int j=0;j<n;j++){
            sum+=arr[j][i];
        }
        if(sum>max){
            max=sum;
            max_index=i;
        }
    }
    return max_index;
}

int main(){
    int arr[3][4]={1,2,3,4,5,6,7,8,9,10,11,12};
    int ans=largestColumnSum(arr,3,4);
    cout<<"ans is "<<ans<<endl;
    return 0;
}
