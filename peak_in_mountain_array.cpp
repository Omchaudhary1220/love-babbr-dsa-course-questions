//Optimise brute-force solution
class Solution {
public:
    int peakIndexInMountainArray(vector<int>& arr) {
       int i,max=arr[0],index=0;
       for(i=1;i<arr.size();i++){
          if(arr[i]<max){
               return index;
          }
          if(arr[i]>max){
              max=arr[i];
              index=i;
          }
       }
       return index;
    }
};

//optimise solution using binary search
class Solution {
public:
    int peakIndexInMountainArray(vector<int>& arr) {
        int first=0,last=arr.size()-1;
        int mid,count=1;
        mid=first+(last-first)/2;
        while(first<last){
            count++;
            if(arr[mid]<arr[mid+1]){
                first=mid+1;
            }
            else{
                last=mid;
            }
            mid=first+(last-first)/2;
        }
        cout<<count<<endl;
        return mid;
    }
};
