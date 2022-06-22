#include <bits/stdc++.h>
using namespace std;
int dp[10001];
int maxsummemo(int arr[],int n,int k){
		if(n==0||n==1){
			return 0;
		}
		if(dp[n]!=0){
			return dp[n];
		}
		if((arr[n-1]-arr[n-2])<k){
			return dp[n]=arr[n-1]+arr[n-2]+ maxsummemo(arr,n-2,k);
		}
		else
			return dp[n]=maxsummemo(arr,n-1,k);
}

int maxSumPairWithDifferenceLessThanK(int arr[],int n,int k){
if(n==0||n==1){
			return 0;
		}
		if((arr[n-1]-arr[n-2])<k){
			return arr[n-1]+arr[n-2]+ maxSumPairWithDifferenceLessThanK(arr,n-2,k);
		}
		else
			return maxSumPairWithDifferenceLessThanK(arr,n-1,k);
    }

int main()
{
	memset(dp,0,sizeof(dp));
    int arr[]= {5, 15, 10, 300};
	sort(arr,arr+4);
	cout<<maxSumPairWithDifferenceLessThanK(arr,4,12);
    return 0;
}
