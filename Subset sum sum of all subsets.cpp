#include <bits/stdc++.h>
using namespace std;

void subsetsum(int ind, int sum, vector<int > arr, vector <int> &ans){
	if(ind==arr.size()){
		ans.push_back(sum);
		return;
	}
		subsetsum(ind+1, sum+arr[ind],arr, ans);
		subsetsum(ind+1,sum, arr, ans);
		sort(ans.begin(),ans.end());
}

int main()
{
	 vector < int > arr={3,1,2};
	 int n= arr.size();
	 int index= 0;
	 vector <int> ans;
		subsetsum(index, 0,arr,ans);
		for(int i=0;i<(pow(2,n));i++){
		cout<<ans[i]<<" ";
		}
    return 0;
}
