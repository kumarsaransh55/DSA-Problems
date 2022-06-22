#include <bits/stdc++.h>
using namespace std;

int minlen(vector<string> v, int n){
int minlen1=v[0].size();
	for(int i=0;i<n;i++){
	if(minlen1>v[i].size()){
		minlen1=v[i].size();
	}
	}
	return minlen1;
}

string solve(vector<string> v, int n){
	int mnlen = minlen(v,n);
	string result;
	char current;
	for(int i=0;i<mnlen;i++){
		current= v[0][i];
		for(int j=0;j<n;j++){
			if(v[j][i]!= current){
				return result;
			}}
			result.push_back(current);
	}
	return result;
}

int main()
{
    vector<string> v= {"leetcode","leert","leertr","leelse"};
    int n= v.size();
    cout<<solve(v,n);
    return 0;
}
