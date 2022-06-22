#include <bits/stdc++.h>
using namespace std;

void collectwater(vector<int> arr,int n){
	int totalwater=0;
	int leftmax=0,rightmax=0;
	int left=0,right= n-1;
		while(left<right){
			if(arr[left]<=arr[right]){
				if(arr[left]>=leftmax){
					leftmax=arr[left];
				}
				else{
					totalwater+= leftmax-arr[left];
				}
				left++;
			}
			else{
				if(arr[right]>=rightmax){
					rightmax=arr[right];
			}
			else{
				totalwater+= rightmax-arr[right];
			}
			right--;
		}
}cout<<totalwater;
}

int main()
{
    vector<int> arr= {0,1,0,2,1,0,1,3,2,1,2,1};
    int n= arr.size();
    collectwater(arr,n);
    return 0;
}
