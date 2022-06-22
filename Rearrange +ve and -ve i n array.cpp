#include <bits/stdc++.h>
using namespace std;

void output(vector <int> &arr, int n){
		vector<int> arr1;
		vector<int> arr2;
		for(int i=0;i<n;i++){
			if(arr[i]<0){
				arr1.push_back(arr[i]);
			}
			else
				arr2.push_back(arr[i]);
		}
		arr.clear();
			int i=0,j=0;
		while(i<arr1.size()&& j<arr2.size()){
				arr.push_back(arr1[i]);
				i++;
				arr.push_back(arr2[j]);
				j++;
		}
}

void rearrange(vector<int > arr , int n){
			int j=n-1;
			int i=0;
			while(i<j){
				if(arr[i]>0){
					i++;
				}
			if(arr[j]<0){
					j--;
				}
			if(i<j)
				swap(arr[i], arr[j]);
			i++;j--;
			}
			int k=0;
			while(k<n){
				swap(arr[i],arr[k]);
				i++;k=k+2;
			}
			for(int i=0;i<n;i++){
			cout<<arr[i]<<" ";
			}
}

int main()
{
    vector <int> arr={1, -2, 3, -4, -1, 4};
		int n= arr.size();
		rearrange(arr,n);
    return 0;
}
