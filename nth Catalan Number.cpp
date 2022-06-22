#include <iostream>
using namespace std;
  int  dp[1001];
int nthcatalannum(int n){
	dp[0]=1;
    dp[1]= 1;
    for(int i=2;i<=n;i++)
      dp[i]=0;
    for(int i=2;i<=n;i++){
        for(int j=0;j<i;j++){
            dp[i] =dp[i]+ dp[j]*dp[i-j-1];
        }
    }
    return dp[n];
}

int nthcatrec(int n){
    if(n==0||n==1){
        return 1;
    }
    if(n<0){
        return 1;
    }
    int res =0;
    for(int i=0;i<n;i++){
    res += nthcatrec(i)*nthcatrec(n-i-1);
        }
return res;
}

int nthcatmomo(int n){
    if(n==0||n==1){
      //  dp[n]=1;
    }
    if(n<0){
        return 0;
    }
        if(dp[n]!=0){
            return dp[n];
        }
    for(int i=0;i<n;i++){
    dp[n] += nthcatmomo(i)*nthcatmomo(n-i-1);
        }
return dp[n];
}


int main()
{
    //int n;
    //cin>>n;
    for(int i=0;i<10;i++){
    cout<<nthcatalannum(i)<<endl;
    }
    return 0;
}
