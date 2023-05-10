#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    int pivotIndex(vector<int>& nums) {
      int i;
      int sum1=0,sum2=0;
      for(i=0;i<nums.size();i++){
         sum2+=nums[i];
      }
      for(i=0;i<nums.size();i++){
        if(sum1==(sum2-nums[i])){
          return i;
        }
        else{
          sum1+=nums[i];
          sum2-=nums[i];
        }
      }
      return -1;
    }
};
int main()
{
    Solution obj;
    vector<int>v1={1,7,3,6,5,6};
    int n=obj.pivotIndex(v1);
    cout<<n<<endl;
    return 0;
}
