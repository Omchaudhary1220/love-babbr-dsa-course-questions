Link:- https://leetcode.com/problems/check-if-array-is-sorted-and-rotated/description/
#include<bits/stdc++.h>
using namespace std;
bool check(vector<int>& nums) {
    int count=0;
    for(int i=1;i<nums.size();i++){
     if(nums[i-1]>nums[i]){
        count++;
      }
    }
    if(nums[nums.size()-1]>nums[0]){
        count++;
    }
    return count<=1;
}

int main(){
    vector<int>v1={3,4,5,1,2};
    cout<<"Is sorted and roated: "<<check(v1)<<endl;
    return 0;
}
