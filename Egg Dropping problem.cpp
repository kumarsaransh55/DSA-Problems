#include <bits/stdc++.h>
using namespace std;
int dp[101][101];
int eggdrop(int n,int k){
	if(n==1){
		return k;
	}
	if(k==0||k==1){
		return k;
	}
	int mm = INT_MAX;int x,tmp;
	for(x=1;x<=k;x++){
	tmp = 1+max(eggdrop(n-1,x),eggdrop(n,k-x));
	mm=min(tmp,mm);
	}
		return mm;
}

int eggdropdp(int n,int k){
	if(n==1){
		return k;
	}
	if(k==0||k==1){
		return k;
	}
	if(dp[n][k]!=-1){
		return dp[n][k];
	}
	int mm = INT_MAX;int x,tmp;
	for(x=1;x<=k;x++){
	tmp = 1+max(eggdropdp(n-1,x),eggdropdp(n,k-x));
	mm=min(tmp,mm);
	}
		return dp[n][k]= mm;
}

int main()
{		int n,k;
		memset(dp,-1,sizeof(dp));
    cin>>n>>k;
    cout<<eggdropdp(n,k);
    return 0;
}
