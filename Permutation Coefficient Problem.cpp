#include <bits/stdc++.h>
using namespace std;

int dp[1001][801];
int npr(int n,int r){
    if(r==0){
        return 1;
    }
    if(r>n)
    return 0;
    return (npr(n-1,r)+r*npr(n-1,r-1));
}

int nprmemo(int n,int r){
    if(r==0){
        dp[n][r]= 1;
    }
    if(r>n){
    return 0;
    }
    if(dp[n][r]!=0){
        return dp[n][r];
    }
    return dp[n][r]=nprmemo(n-1,r)+r*nprmemo(n-1,r-1);
}

int o1complexity(int n,int r){
        int P=1;
        for(int i=n;i>n-r;i--){
            P=P*i;
        }
        return P;
}

int factmethod(int n,int r){
        int fact[n+1];
        fact[0]=1;
        for(int i=1;i<=n;i++){
            fact[i]=fact[i-1]*i;
        }
        return fact[n]/fact[n-r];
}

int main()
{
    int n,r;
    cin>>n>>r;
    memset(dp,0,sizeof(dp));
    cout<<factmethod(n,r);
    return 0;
}
