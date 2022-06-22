#include <bits/stdc++.h>
using namespace std;
#define C 5
#define R 6
int matrix(int m[R][C]){
		int dp[R][C];
		int i=0,j=0;
		for( i=0;i<R;i++){
		dp[i][j]= m[i][j];
		}
		i=0;
		for( j=0;j<C;j++){
			dp[i][j]= m[i][j];
		}
		for(i=1;i<R;i++){
		for(j=1;j<C;j++){
			if(m[i][j]==1){
				dp[i][j]=min({dp[i-1][j-1],dp[i-1][j],dp[i][j-1]})+1;
		}
		else
			dp[i][j]=0;
			}}
			int maxx=0;
		for(i=1;i<R;i++){
		for(j=1;j<C;j++){
		if(dp[i][j]>maxx){
			maxx=dp[i][j];
		}
		}}
		return maxx;
}

int main()
{
int M[R][C]={{0, 1, 1, 0, 1},
                     {1, 1, 0, 1, 0},
                     {0, 1, 1, 1, 0},
                     {1, 1, 1, 1, 0},
                     {1, 1, 1, 1, 1},
                     {0, 0, 0, 0, 0}};
			cout<<matrix(M);
    return 0;
}
