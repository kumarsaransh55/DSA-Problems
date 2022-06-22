#include <bits/stdc++.h>
using namespace std;

bool custom(pair<int,int> a,pair<int,int> b){
return a.second<b.second;
}

int main()
{
    vector<pair<int,int>> v={{10,20},{12,15},{20,30},{1,11}};
    sort(v.begin(),v.end(), custom);
		for(int i=0;i<4;i++){
				cout<<v[i].first<<" "<<v[i].second<<endl;
		}
		int ans=1;
		int end=v[0].second;
		for(int i=1;i<4;i++){
			if(end<=v[i].first){
					ans++;
					end= v[i].second;
			}
		}
		cout<<ans<<endl;
    return 0;
}
