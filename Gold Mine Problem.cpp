#include <bits/stdc++.h>
using namespace std;

int collectgold(int gold[][4], int i,int j,int n,int m){
		if(i<0||j==m||i==n){
		return 0;
		}
		else
			return gold[i][j] +max(collectgold(gold,i-1,j+1,n,m),max(collectgold(gold,i,j+1,n,m) ,collectgold(gold,i+1,j+1,n,m)));
}

int getmaxgold(int gold[][4], int n,int m){
	int maxgold=0;
	for(int i=0;i<n;i++){
		maxgold= max(maxgold,collectgold(gold,i,0,n,m));
	}
	return maxgold;
}

int collectgolddp(int gold[][4], int i,int j,int n,int m,int dp[][5]){
		if(i<0||j==m||i==n){
		return 0;
		}
		else if(dp[i][j] != -1){
			return dp[i][j];
		}
		else
			return dp[i][j]= gold[i][j] +max(collectgolddp(gold,i-1,j+1,n,m,dp),max(collectgolddp(gold,i,j+1,n,m,dp) ,collectgolddp(gold,i+1,j+1,n,m,dp)));
}

int getmaxgolddp(int gold[][4], int n,int m){
	int maxgold=0;
	int dp[5][5];
	memset(dp,-1,sizeof(dp));
	for(int i=0;i<n;i++){
		maxgold= max(maxgold,collectgolddp(gold,i,0,n,m,dp));
	}
	return maxgold;
}

int main()
{
    int gold[][4]={{1,3,1,5},{2,2,4,1},{5,0,2,3},{0,6,1,2}};
    int m,n;
    m=4,n=4;
    cout<<getmaxgolddp(gold,n,m);
    return 0;
}
