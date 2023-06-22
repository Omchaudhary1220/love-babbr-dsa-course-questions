#include<bits/stdc++.h>
using namespace std;
int largest_RowSum(int arr[][4],int n,int m){
    int max=INT_MIN;
    int max_index=-1;
    for(int i=0;i<n;i++){
        int sum=0;
        for(int j=0;j<m;j++){
            sum+=arr[i][j];
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
    int ans=largest_RowSum(arr,3,4);
    cout<<"ans is "<<ans<<endl;
    return 0;
}
