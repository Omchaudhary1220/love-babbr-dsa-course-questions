//Link:- https://www.codingninjas.com/studio/contests/love-babbar-contest-ii/3583551/problems/14818
#include <bits/stdc++.h> 
int classTest(int n, vector<int> &a, int k) {
    sort(a.begin(),a.end());
    return a[a.size()-k];
}
