#include <bits/stdc++.h>
using namespace std;
int dp[500001];

int LISdp(vector <int> a, int i){
		int ans=0;
		if(dp[i]!=-1) return dp[i];
		for(int j=0;j<i;j++){
			if(max(a[j],a[j+1])<=max(a[i+1],a[i+2])){
				ans=max(ans,1+LISdp(a,j));
			}
		}
		return dp[i]= ans;
}

int main()
{
		memset(dp,-1,sizeof(dp));
		vector<int> a;
		int ans=0;
		int n;cin>>n;
		for(int i=0;i<n;i++){
			cin>>a[i];
		}
		for(int i=0;i<n-1;i++){
			ans=max(ans,LISdp(a,i));
		}
		cout<<ans;
    return 0;
}
