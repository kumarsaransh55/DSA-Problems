#include <bits/stdc++.h>
using namespace std;
int dp[1001];

int maxlength(vector<pair<int,int>> vect,int n){
	for(int i=0;i<n;i++){
		dp[i]=1;
		}
	for(int i=1;i<n;i++){
	for(int j=0;j<i;j++){
		if(vect[j].second <vect[i].first){
		dp[i]= max(dp[i],dp[j]+1);
		}}}
		int ma=0;
	for(int i=0;i<n;i++){
		ma=max(ma,dp[i]);
		}
	return ma;
}


int main()
{
vector <pair<int,int>> pk={ {5, 24}, {15, 25},
						{27, 40}, {50, 60} };
		sort(pk.begin(),pk.end());
		cout<<maxlength(pk,4);
    return 0;
}
