Link:- https://leetcode.com/problems/move-zeroes/description/
class Solution {
public:
    void swap(int* p,int* q){
        int temp=*p;
        *p=*q;
        *q=temp;
    }
    void moveZeroes(vector<int>& nums) {
        int i=0,j;
        for(j=0;j<nums.size();j++){
            if(nums[j]!=0){
                swap(&nums[i],&nums[j]);
                i++;
            }
        }

    }
};
