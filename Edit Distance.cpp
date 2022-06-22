#include <bits/stdc++.h>
using namespace std;

int editdistance(string s,string s2, int m,int n){
		if(s==s2){
		return 0;
		}
		if(m==0){
			return n;
		}
		if(n==0){
			return m;
		}
		if(s[m-1]!=s2[n-1]){
		return 1+min(min(editdistance(s,s2,m,n-1),editdistance(s,s2,m-1,n)),editdistance(s,s2,m-1,n-1));
			}
		else{
			return editdistance(s,s2,m-1,n-1);
		}
}

int editdistancememo(string s,string s2, int m,int n){
		int dp[m+1][n+1];
		memset(dp,-1,sizeof(dp));
		for(int i=0;i<=m;i++){
		for(int j=0;j<=n;j++){
		if(i==0){
			dp[i][j]=j;
		}
		else if(j==0){
			dp[i][j]=i;
		}
		// If last characters are same, ignore last char
            // and recur for remaining string
		else if (s[i - 1] == s2[j - 1])
                dp[i][j] = dp[i - 1][j - 1];
            // If the last character is different, consider
            // all possibilities and find the minimum
            else
                dp[i][j]= 1+ min(dp[i][j - 1],min(dp[i - 1][j],dp[i - 1][j - 1]));
        }
    }
    return dp[m][n];
		}

int main()
{
		string s,s2;
		cin>>s>>s2;
		int m= s.length();
		int n = s2.length();
		int ans =editdistancememo(s,s2 ,m,n);
		if(ans==0){
		cout<<"Strings are Equal";
		}
		else
			cout<<ans<<endl;
    return 0;
}
