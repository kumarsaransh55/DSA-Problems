#include <bits/stdc++.h>
using namespace std;

void doit(vector<int> &arr){
	int i=0,j=0;
			for(int i=arr.size()-2;i>=0;i--){
				if(arr[i]<arr[i+1])
				break;
				}
				if(i<0){
					reverse(arr.begin(),arr.end());
					return;
			} else{
			for( j=arr.size()-1;j>i;j--){
				if(arr[j]>arr[i]){
					break;
				}}
				swap(arr[i],arr[j]);
				reverse(arr.begin()+i+1,arr.end());
		}}

int main(){
    vector<int> arr={1,3,2};
		doit(arr);
		for(int i=0;i<arr.size();i++){
		cout<<arr[i]<<" ";
		}
    return 0;
}
