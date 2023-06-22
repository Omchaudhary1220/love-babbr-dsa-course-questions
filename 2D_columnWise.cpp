#include<bits/stdc++.h>
using namespace std;
void print(vector<int>ans){
    for(int i=0;i<ans.size();i++){
        cout<<ans[i]<<" ";
    }
    cout<<endl;
}
vector<int>columnWise_sum(int arr[][4],int n,int m){
    vector<int>ans;
    for(int i=0;i<m;i++){
        int sum=0;
        for(int j=0;j<n;j++){
            sum+=arr[j][i];
        }
        ans.push_back(sum);
    }
    return ans;
}

int main(){
    int arr[3][4]={1,2,3,4,5,6,7,8,9,10,11,12};
    vector<int>ans=columnWise_sum(arr,3,4);
    print(ans);
    return 0;
}
