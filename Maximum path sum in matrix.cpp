#include <bits/stdc++.h>
using namespace std;
#define N 2
int dp[1001][1001];
int maxpathsum(int matrix[][N],int i,int j){
if(j<0||j>=N||i>=N){
	return 0;
}
return matrix[i][j]+max({maxpathsum(matrix,i+1,j-1),maxpathsum(matrix,i+1,j),maxpathsum(matrix,i+1,j+1)});
}

int maxpathsummemo(int matrix[][N],int i,int j){
if(j<0||j>=N||i>=N){
	return 0;
}
if(dp[i][j]!=-1){
	return dp[i][j];
}
return dp[i][j]= matrix[i][j]+max({maxpathsummemo(matrix,i+1,j-1),maxpathsummemo(matrix,i+1,j),maxpathsummemo(matrix,i+1,j+1)});
}

int maxpathsum1(int matrix[][N]){
	int i=0,j=0;
	int maxx=0;
	for(j=0;j<N;j++){
			maxx=max(maxx,maxpathsummemo(matrix,0,j));
	}
	return maxx;
}

int main()
{
	memset(dp,-1,sizeof(dp));
   int matrix[N][N] = {{348, 391},{618, 193}};
   cout<<maxpathsum1(matrix);
    return 0;
}
