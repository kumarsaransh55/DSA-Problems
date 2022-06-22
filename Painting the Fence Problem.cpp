#include <bits/stdc++.h>
using namespace std;
int countnfways(int n ,int k){
int dp[n+1];
memset(dp,0,sizeof(dp));
dp[1]= k;
dp[2]= k*k;
for(int i=0;i<n;i++){
	dp[i]=((k-1)*(dp[i-1])+dp[i-2]);
}
return dp[n];
}


int main()
{
			int n,k;
			cin>>n>>k;
			cout<<countnfways(n,k);
    return 0;
}
