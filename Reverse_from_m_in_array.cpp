Link:- https://www.codingninjas.com/codestudio/problems/reverse-the-array_1262298
#include <bits/stdc++.h> 
void swap(int* p,int* q){
	int temp=*p;
	*p=*q;
	*q=temp;
}
void reverseArray(vector<int> &arr , int m)
{
    int s=m+1;
	int e=arr.size()-1;
	while(s<e){
		swap(&arr[s],&arr[e]);
		s++;
		e--;
	}

}
