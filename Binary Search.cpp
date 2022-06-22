#include <bits/stdc++.h>
using namespace std;

int binaryboi(vector<int> vec, int low, int high, int target){
		while(low<=high){
			int mid=(low+high)/2;
			if(vec[mid]== target){
				return mid;
			}
			else if(vec[mid]>target){
					return binaryboi(vec,low,mid-1,target);
			}
			else{
				return binaryboi(vec,mid+1,high,target);
}				}
			return 0;
}

int binarty(vector<int > vec,int target){
		int low=0; int high= vec.size()-1;
		while(low<=high){
			int mid= (low+high)/2;
			if(vec[mid]== target){
				return mid;
			}
			else if(vec[mid]>target){
			high= mid-1;
			}
			else
				low= mid+1;
		}
		return 0;
}

int main()
{
		int target=5;
		vector<int> vec= {1,2,3,4,5,6};
		int n= vec.size();
		cout<<binarty(vec,target)<<endl;
    return 0;
}
