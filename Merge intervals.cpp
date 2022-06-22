#include <bits/stdc++.h>
using namespace std;

void mergeinterval(vector<pair<int,int >>& v){
		int n= v.size();
		vector<pair<int,int>> ans;
		sort(v.begin(),v.end());

		for(int i=0;i<n;i++){
		int start = v[i].first;
		int end= v[i].second;
		 if (!ans.empty()) {
      if (start <= ans.back().second) {
        continue;
      }
    }

    for (int j = i + 1; j < n; j++) {
      if (v[j].first <= end) {
        end = v[j].second;
      }
    }
    ans.push_back({
      start,
      end
    });
  }
		for(int i=0;i<ans.size();i++){
		cout<<ans[i].first<<" "<< ans[i].second<<endl;
		}
}

void subinterval(vector<vector<int>> &v1){
		vector<vector<int>> ans;
		int n= v1.size();
		for(int i=0;i<n;i++){
		if(ans.empty()|| ans.back()[1]<v1[i][0]){
			vector<int> v= {v1[i][0],v1[i][1]};
		ans.push_back(v);}
		else{
			ans.back()[1]= max(ans.back()[1], v1[i][1]);
		}
		}
		for(int i=0;i<ans.size();i++){
				for(int j=0;j<2;j++){
			cout<<ans[i][j]<<" ";
				}
		cout<<endl;
		}

}

int main()
{
	vector<pair<int,int >> v={{1,3},{2,6},{8,10},{15,18}};
	vector<vector<int>> v1={{1,3},{2,6},{8,10},{15,18}};
	//mergeinterval(v);
    subinterval(v1);
    return 0;
}
