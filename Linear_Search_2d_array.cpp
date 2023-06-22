#include<iostream>
using namespace std;
//time complexity O(n*m) space complexity O(1)
pair<int,int> linearsearch(int arr[][4],int n,int m,int k){
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(arr[i][j]==k){
                return {i,j};
            }
        }
    }
    return {-1,-1};
}
int main(){
    int arr[3][4]={1,2,3,4,5,6,7,8,9,10,11,12};
    int k=7;
    pair<int,int>ans=linearsearch(arr,3,4,k);
    cout<<"ans is "<<ans.first<<" "<<ans.second<<endl;
    return 0;
}
