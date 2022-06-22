#include<bits/stdc++.h>
using namespace std;
int dp[100][1111];
int knapsack(int n,int w,int val[],int wt[]){

        if(n==0||w==0){
            return 0;
        }
        if(wt[n-1]<=w){
            return max(val[n-1]+knapsack(n-1,w-wt[n-1],val,wt),knapsack(n-1,w,val,wt));
        }
        else{
        return knapsack(n-1,w,val,wt);
        }
}

int knapsackdp(int n,int w,int val[],int wt[]){
        if(n==0||w==0){
            dp[n][w] =0;
        }
        if(dp[n][w]!= -1){
            return dp[n][w];
        }
        if(wt[n-1]<=w){
            return dp[n][w]= max(val[n-1]+knapsackdp(n-1,w-wt[n-1],val,wt),knapsackdp(n-1,w,val,wt));
        }
        else{
        return dp[n][w]= knapsackdp(n-1,w,val,wt);
        }
}

int realdp(int n,int w,int val[],int wt[]){
int i=0;
int j=0;
        for(i=0;i<=n;i++){
            for(j=0;j<=w;j++){
           if(i==0||j==0){
            dp[i][j] =0;
        }
            }
        }
        for(i=1;i<=n;i++){
            for(j=1;j<=w;j++){
        if(wt[i-1]<=j){
        dp[i][j]= max(val[i-1]+dp[i-1][j-wt[i-1]], dp[i-1][j]);
        }
        else{
        dp[i][j]= dp[i-1][j];
        }}}
        return dp[n][w];
}

int main()
 {
    int t;
    cin>>t;
    while(t--)
    {
        int n, w;
        cin>>n>>w;
        int val[n];
        int wt[n];
        for(int i=0;i<n;i++)
            cin>>val[i];
        for(int i=0;i<n;i++)
            cin>>wt[i];
            dp[n+1][w+1];
            memset(dp,-1,sizeof(dp));
        cout<<knapsack(n,w,val,wt)<<endl;
    }
	return 0;
}
