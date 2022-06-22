#include <bits/stdc++.h>
using namespace std;

int LCS(string s1,int n,string s2,int m){
		if(n==0||m==0){
			return 0;
		}
		if(s1[n-1]==s2[m-1]){
			return 1+LCS(s1,n-1,s2,m-1);
		}
		else
			return max(LCS(s1,n-1,s2,m),LCS(s1,n,s2,m-1));
}

int LCSdp(string s1,int n,string s2,int m){
		int dp[n+1][m+1];
		memset(dp,-1,sizeof(dp));
		if(n==0||m==0){
			return 0;
		}
		if(dp[n][m]!=-1){
			return dp[n][m];
		}
		if(s1[n-1]==s2[m-1]){
			return dp[n][m]=1+LCSdp(s1,n-1,s2,m-1);
		}
		else
			return dp[n][m]= max(LCSdp(s1,n-1,s2,m),LCS(s1,n,s2,m-1));
}

int main()
{
	string s1= "abcdghg";
	string s2= "acdfhrg";
	int n,m;
	n=s1.length();
	m=s2.length();
	cout<<LCSdp(s1,n,s2,m)<<endl;
    return 0;
}
