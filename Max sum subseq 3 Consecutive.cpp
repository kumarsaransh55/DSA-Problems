#include <bits/stdc++.h>
using namespace std;
int dp[1001];

int subseq(int arr[], int n){
		if(n==-1){
			return 0;
		}
		if(n==0){
			return arr[0];
		}
		if(n==1){
			return arr[1]+arr[0];
		}
		if(dp[n]!=-1){
			return dp[n];
		}
		else
			return dp[n]= max(max(subseq(arr,n-1),arr[n]+subseq(arr,n-2)),arr[n]+arr[n-1]+subseq(arr,n-3));
}

int main()
{
		memset(dp,-1,sizeof(dp));
   int arr[]={3000,2000,1000,3,10};
   int n=sizeof(arr)/sizeof(arr[0]);
   cout<<subseq(arr,n);
    return 0;
}
