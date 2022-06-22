#include <bits/stdc++.h>
using namespace std;
int static dp[1001][1001];

int LRS(string s1,int n,int m){
		if(n==0||m==0){
			return 0;
		}
		if((s1[n-1]==s1[m-1])&&(n!=m)){
			return LRS(s1,n-1,m-1)+1;
		}
		else
			return max(LRS(s1,n-1,m),LRS(s1,n,m-1));
}

int LRSdp(string s1,int n,int m){
		if(n==0||m==0){
			return 0;
		}
		if((s1[n-1]==s1[m-1])&&(n!=m)){
			return dp[n][m]=LRSdp(s1,n-1,m-1)+1;
		}
		else
			return dp[n][m]= max(LRSdp(s1,n-1,m),LRSdp(s1,n,m-1));
}

int main()
{
	memset(dp,-1,sizeof(dp));
		string s1="aabebcdd";
		int m= s1.length();
		int n= s1.length();
		cout<<LRSdp(s1,n,m)<<endl;
    return 0;
}
