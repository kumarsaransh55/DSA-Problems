#include <bits/stdc++.h>
using namespace std;
int dp[10001][10001];
int minimumcost(int arr[],int n,int wt){
	if(wt<0||n<=0){
		return 1001;
	}
	if(wt==0){
		return 0;
	}
	if(dp[n][wt]!=-1){
		return dp[n][wt];
	}
	if(arr[n-1]<0){
		return dp[n][wt]= min(INT_MAX,minimumcost(arr,n-1,wt));
	}
	if(n<=wt){
		return dp[n][wt] =min((arr[n-1]+minimumcost(arr,n,wt-n)),minimumcost(arr,n-1,wt));
	}
		return dp[n][wt]=minimumcost(arr,n-1,wt);
}

int main()
{
	memset(dp,-1,sizeof(dp));
    int arr[]= {20,-1,-1,50,-1};
    int n= sizeof(arr)/sizeof(arr[0]);
    int wt=2;
    cout<<minimumcost(arr,n,wt);
    return 0;
}
