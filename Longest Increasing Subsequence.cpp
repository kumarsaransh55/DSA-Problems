#include <bits/stdc++.h>
using namespace std;
int dp[10000];

int LIS(vector <int> a, int i){
		int ans=1;
		for(int j=0;j<i;j++){
			if(a[i]>a[j]){
				ans=max(ans,1+LIS(a,j));
			}
		}
		return ans;
}

int LISdp(vector <int> a, int i){
		int ans=1;
		if(dp[i]!=-1) return dp[i];
		for(int j=0;j<i;j++){
			if(a[i]>a[j]){
				ans=max(ans,1+LISdp(a,j));
			}
		}
		return dp[i]= ans;
}

int main()
{
		memset(dp,-1,sizeof(dp));
		vector<int> a= {0,8,4,12,2,10,6,14,1,9,5,13,3,11,7,18};
		int ans=0;
		for(int i=0;i<16;i++){
			ans=max(ans,LISdp(a,i));
		}
		cout<<ans;
    return 0;
}
