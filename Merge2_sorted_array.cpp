// Link:- https://leetcode.com/problems/merge-sorted-array/description/
// for this question we have to merge both array and store into first array.
#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int i = m - 1;
        int j = n - 1;
        int k = m + n - 1;
        
        while (j >= 0) {
            if (i >= 0 && nums1[i] > nums2[j]) {
                nums1[k--] = nums1[i--];
            } else {
                nums1[k--] = nums2[j--];
            }
        }
    }
};
//using an extra vector
vector<int> merge(vector<int>arr,int n1,vector<int>arr1,int n2){
    int i=0,j=0;
    vector<int>ans;
    while(i<n1&&j<n2){
        if(arr[i]<=arr1[j]){
            ans.push_back(arr[i]);
            i++;
        }
        else{
            ans.push_back(arr1[j]);
            j++;
        }
    }
    while(i<n1){
        ans.push_back(arr[i]);
        i++;
    }
    while(j<n2){
        ans.push_back(arr1[j]);
        j++;
    }
    return ans;
}
int main(){
    vector<int>arr={2,4,6,8,10};
    vector<int>arr1={10,20,30,40};
    int n1=arr.size();
    int n2=arr1.size();
    vector<int>ans;
    ans=merge(arr,n1,arr1,n2);
    for(auto i:ans){
        cout<<i<<" ";
    }
    return 0;
}
