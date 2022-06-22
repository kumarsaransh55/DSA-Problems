#include <bits/stdc++.h>
using namespace std;
long long int ans =0;
int dp[1001][801];
int ncr(int n,int r){
    if(n==0&& r!=0){
        return 0;
    }
    if(r==0|| n==0){
        return 1;
    }
    if(n==r){
        return 1;
    }
    return ncr(n-1,r-1)+ncr(n-1,r);
}

int ncrmemo(int n,int r){
    if(n==0&& r!=0){
        return 0;
    }
    if(r==0|| n==0){
        dp[n][r]= 1;
    }
    if(dp[n][r]!=0){
        return dp[n][r];
    }
    return dp[n][r]=ncrmemo(n-1,r-1)+ncrmemo(n-1,r);
}

int ncrdp(int n,int r){
    if(n==0&& r!=0){
        return 0;
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<r;j++){
        if(j==0){
        dp[i][j]= 1;
    }}}
         for(int i=1;i<=n;i++){
        for(int j=1;j<=min(i,r);j++){
    dp[i][j]= dp[i-1][j-1]+dp[i-1][j];
}}
return dp[n][r];
}

int main()
{
    int n,r;
    cin>>n>>r;
    memset(dp,0,sizeof(dp));
    cout<<ncrdp(n,r);
    return 0;
}
