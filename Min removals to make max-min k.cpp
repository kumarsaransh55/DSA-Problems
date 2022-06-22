#include <bits/stdc++.h>
using namespace std;
int dp[1001][1001];
int maxmin(vector <int> &arr,int i,int n,int k){
	if(i>=n){
		return 0;
	}
	int ans=0;
	if(dp[i][n]!=-1){
		return dp[i][n];
	}
	if(arr[n]-arr[i]<=k){
		return 0;
	}
		return dp[i][n]= 1+min(maxmin(arr,i,n-1,k),maxmin(arr,i+1,n,k));
}

int binarysearch(vector<int> arr,int i,int n,int k){
		int mid= (i+n)/2;
		if(arr[mid]==k){return mid;}
		if(i>n){
			return arr[mid+1];			//JAB PADH KE AAUNGA TAB KARUNGA
		}
		if(arr[mid]>k){
		return binarysearch(arr,i,mid,k);
		}
		else
			return binarysearch(arr,mid+1,n,k);
}

int onlognsol(vector<int> arr,int n,int k){
		int ans=0;
		int j;
		for(int i=0;i<n;i++){
			 j= binarysearch(arr,i,n,arr[i]+k);
			ans= min(ans,n-(j-i+1));
		}
		return ans;
}

int main()
{
	vector <int > arr= {1,3,4,9,10,11,12,17,20};
	int k=5;
	int n= arr.size();
	memset(dp,-1,sizeof(dp));
	if(n==1) return 0;
	sort(arr.begin(),arr.end());
	cout<<binarysearch(arr,0,n,k);
    return 0;
}
