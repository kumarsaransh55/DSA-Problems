#include <bits/stdc++.h>
using namespace std;

 void combinationsum(int index, int target, vector<int> arr, vector<int> ds, vector<vector<int>> &ans){
	if(index==arr.size()){
	if(target==0){
		ans.push_back(ds);
	}
		return;
	}

	if(target>=arr[index]){
	ds.push_back(arr[index]);
	combinationsum(index+1,target-arr[index],arr,ds,ans);
	ds.pop_back();
	}
	combinationsum(index+1,target,arr,ds,ans);
 }
 void combinationsum1(int index, int target, vector<int> arr, vector<int> ds, vector<vector<int>> &ans){
	if(target==0){
		ans.push_back(ds);
		return;
	}
	for(int i=index;i<arr.size();i++){
	 if(i>index && arr[i]==arr[i-1]){continue;}
	 if(arr[i]>target){break;}
	ds.push_back(arr[i]);
	combinationsum(i+1,target-arr[i],arr,ds,ans);
	ds.pop_back();
	}
 }
int main()
{
	vector < int > v {10,1,2,7,6,1,5};
	int target = 8;
	sort(v.begin(),v.end());
	vector<vector<int>> ans;
	vector<int> ds;
	combinationsum1(0,target,v,ds,ans);
	for(int i=0;i<ans.size();i++){
	for(int j=0;j<ans[i].size();j++){
			cout<<ans[i][j]<<" ";
	}
	cout<< endl;
	}
    return 0;
}
