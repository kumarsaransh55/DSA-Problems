#include <bits/stdc++.h>
using namespace std;

vector<vector<int>> mergee(vector<vector<int>> interval){
	vector<vector<int>>  ninterval;
	if(interval.size()==0){
		return ninterval;
	}
	vector<int> tempint = interval[0];
	for(auto it : interval){
		if(it[0]<= tempint[1]){
			tempint[1]=max(it[1],tempint[1]);
		}
		else{
			ninterval.push_back(tempint);
			tempint= it;
	}}
	ninterval.push_back(tempint);
	return ninterval;
}

int main()
{
		vector<vector<int>> v;
		v= {{1,3},{2,6},{8,10},{15,18}};
		int n= 4;
		vector<vector<int>> ans= mergee(v);
		for(int i=0;i<ans.size();i++){
		for(int j=0;j<2;j++){
				cout<<ans[i][j]<<" ";
		}
		cout<< endl;
		}
    return 0;
}
