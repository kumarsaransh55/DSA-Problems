#include <bits/stdc++.h>
using namespace std;
int dp[1001];
int minJumps(int arr[], int n){
		int maxr=arr[0];
		int steps=arr[0];
		int jump= 1;
		if(n==1) return 0;
		else if(arr[0]==0) return -1;
		else{
			for(int i=1;i<n;i++){				//GREEDY O(N)
				if(i==n-1){
					return jump;
				}
				maxr = max(maxr,i+arr[i]);
				steps--;
				if(steps==0){
					jump++;
					if(i>=maxr){
						return -1;
					}
					steps=maxr-i;
				}}
		}
}

int jumps(int i,int arr[],int n){
		if(i==n-1){
			return 0;
		}
		if(i>=n){
		return INT_MAX;
		}
		int steps =arr[i];
		int minvalue1= INT_MAX;
		for(int j=1;j<=steps;j++){
			minvalue1= min(minvalue1,jumps(i+j,arr,n));
		}
		return minvalue1+1;
}

int main()
{
	memset(dp,0,sizeof(dp));
	int arr[] = { 1, 3, 6, 3, 2,
				3, 6, 8, 9, 5,1,1 };
	int n = sizeof(arr) / sizeof(arr[0]);
	cout << "Minimum number of jumps to";
	cout << " reach the end is " << jumps(0,arr, n);
	return 0;
}
