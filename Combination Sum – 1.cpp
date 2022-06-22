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
	combinationsum(index,target-arr[index],arr,ds,ans);
	ds.pop_back();
	}
	combinationsum(index+1,target,arr,ds,ans);
 }

int main()
{
	vector < int > v {2,3,6,7};
	int target = 7;
	vector<vector<int>> ans;
	vector<int> ds;
	combinationsum(0,target,v,ds,ans);
	for(int i=0;i<ans.size();i++){
	for(int j=0;j<ans[i].size();j++){
			cout<<ans[i][j]<<" ";
	}
	cout<< endl;
	}
    return 0;
}
