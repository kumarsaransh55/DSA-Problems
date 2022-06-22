#include <bits/stdc++.h>
using namespace std;

int noofsegments(int l,int p,int q,int r){
		if(l<=0){
			return 0;
		}
		int a=-INT_MIN;
		int b=INT_MIN;
		int c=INT_MIN;
		if(p<=l){
			 a= noofsegments(l-p, p, q,r);
		}
		if(q<=l){
			b= noofsegments(l-q, p, q,r);
		}
		if(r<=l){
			c =noofsegments(l-r, p, q,r);
		}
		return 1+max(a,max(b,c));
}

int noofsegmentsdp(int l,int p,int q,int r){
		int dp[10000];
		memset(dp,-1,sizeof(dp));
		if(l==0){
			return 0;
		}
		int a=-INT_MIN;
		int b=INT_MIN;
		int c=INT_MIN;
		if(dp[l]!=-1){
			return dp[l];
		}
		if(p<=l){
			 a= noofsegments(l-p, p, q,r);
		}
		if(q<=l){
			b= noofsegments(l-q, p, q,r);
		}
		if(r<=l){
			c =noofsegments(l-r, p, q,r);
		}
		return dp[l]= 1+max(a,max(b,c));
}

int main()
{
		int l=11,p=2,q=3,r=5;
		cout<<noofsegmentsdp(l,p,q,r);
    return 0;
}
