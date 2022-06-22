#include <bits/stdc++.h>
using namespace std;

bool ispalindrome(string s,int start,int end){
	while(start<end){
		if(s[start++]!=s[end--]){
			return false;
		}
	}
	return true;
}

void palindromepartition(int ind,string s, vector<string> ds, vector<vector<string>> &res){
	if(ind==s.size()){
		res.push_back(ds);
		return;
	}
	for(int i=ind;i<s.size();i++){
		if(ispalindrome(s,ind,i)){
			ds.push_back(s.substr(ind, i-ind+1));
			palindromepartition(i+1,s,ds,res);
			ds.pop_back();
		}
	}
}

int main()
{
	string s= "aabb";
	vector<vector<string>> res;
	vector<string> ds;
	palindromepartition(0,s,ds,res);
	for(int i=0;i<res.size();i++){
	for(int j=0;j<res[i].size();j++){
	cout<< res[i][j]<<" ";
	}
	cout<<endl;
	}
    return 0;
}
