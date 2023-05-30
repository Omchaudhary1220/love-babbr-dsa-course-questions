Link:- https://www.codingninjas.com/codestudio/contests/love-babbar-contest-l/3189127/problems/14804?leftPanelTab=0
long long appleAndCoupon(int n, int m, vector<int> arr){
    sort(arr.begin(),arr.end());
    long long f_index=n-m;
    long long sum=0;
    for(long long i=0;i<n;i++){
        sum+=arr[i];
    }
    return sum-arr[f_index];
}
