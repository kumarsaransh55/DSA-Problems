#include <bits/stdc++.h>
using namespace std;

void printperm(vector<int> v,vector<int> ds, vector<vector<int>> &res,vector<int> freq){
	if(v.size()==ds.size()){
		res.push_back(ds);
		return;
	}
	for(int i=0;i<v.size();i++){
		if(!freq[i]){
			ds.push_back(v[i]);
			freq[i]=1;
			printperm(v,ds,res,freq);
			freq[i]=0;
			ds.pop_back();
		}
	}
}

void optimal(int index, vector<int>v,vector<vector<int>> &res){
	if(index==v.size()){
		res.push_back(v);
		return;
	}

	for(int i=index;i<v.size();i++){
		swap(v[i],v[index]);
		optimal(index+1,v,res);
		swap(v[i],v[index]);
	}
}

int main()
{
	vector<int> v ={1,2,3};
	vector<int>ds;
	vector<int> freq(3);
	for(int i=0;i<v.size();i++){
		freq[i]=0;
	}
	vector<vector<int>> res;
	optimal(0,v,res);
	for(int i=0;i<res.size();i++){
	for(int j=0;j<res[i].size();j++){
			cout<<res[i][j]<<" ";
	}
	cout<< endl;
	}
    return 0;
}
