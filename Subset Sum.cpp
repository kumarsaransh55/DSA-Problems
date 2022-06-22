#include <bits/stdc++.h>
using namespace std;
bool dp[1001][1000];

bool subsetsum(int arr[],int n, int sum){
	if(n==0){
		return false;
	}
	if(sum==0){
		return true;
	}
	if(arr[n-1]<sum){
		return (subsetsum(arr,n-1,sum-arr[n-1])||subsetsum(arr,n-1,sum));
	}
	else if(arr[n-1]>sum){
		return subsetsum(arr,n-1,sum);
}
}

bool subsetsummemo(int arr[],int n, int sum){
	if(n==0){
		dp[n][sum]=  false;
	}
	if(sum==0){
		dp[n][sum]= true;
	}
	if(arr[n-1]==sum){
		dp[n][sum]=  true;
	}
	if(arr[n-1]<sum){
		return dp[n][sum]= (subsetsum(arr,n-1,sum-arr[n-1])||subsetsum(arr,n-1,sum));
	}
	else if(arr[n-1]>sum){
		return dp[n][sum]=  subsetsum(arr,n-1,sum);
}
return dp[n][sum];
}

int main()
{
 int arr[]={2,4,6,7};
memset(dp,false,sizeof(dp));
 if(subsetsummemo(arr,4,7)){
	cout<<"Yes";
 }
 else cout<<"No";
    return 0;
}
