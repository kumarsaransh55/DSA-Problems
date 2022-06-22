#include <bits/stdc++.h>
using namespace std;

int countpaths(int i,int j,int n,int m,vector<vector<int>> &dp){
		if(i==n-1 && j==m-1){return 1;}
		if(i>=n||j>=m){return 0;}
		if(dp[i][j]!=-1){
			return dp[i][j];
		}
		else
			return dp[i][j] =countpaths(i+1,j, n,m,dp)+countpaths(i,j+1,n,m,dp);
}
		//O(n)
void combinationapproach(int n,int m){
	int N= n+m-2;
	int r= n-1;
	int res=1;
	for(int i=0;i<r;i++){
		res= res* (N-i);
		res= res/ (i+1);
	}
	cout<< res;
}

int main()
{
		vector<vector<int>> dp(3,vector<int> (7,-1));
		combinationapproach(3,7);
		//cout<<countpaths(0,0,3,7,dp);
    return 0;
}
