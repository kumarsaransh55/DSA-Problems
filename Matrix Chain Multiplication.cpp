#include <iostream>
#include <cstring>
using namespace std;
static int dp[1001][1001];
int MCM(int arr[], int i,int j){
if(i>=j){
    return 0;
}
int k;
int tempans;
int min = INT_MAX;
    for(int k=i;k<j;k++){
    	tempans= MCM(arr,i,k)+MCM(arr,k+1,j)+ arr[i-1]*arr[k]*arr[j];
		if(tempans<min)
			min=tempans;
		}
return min;
}

int MCMmemo(int arr[], int i,int j){
if(i>j){
    return 0;
}
if(i==j){
	dp[i][j]=0;
}
int k;
int tempans;
int min = INT_MAX;

	if(dp[i][j]!=0){
		return dp[i][j];
	}
    for(int k=i;k<j;k++){
    	dp[i][j]=  MCM(arr,i,k)+MCM(arr,k+1,j)+ arr[i-1]*arr[k]*arr[j];
		if(dp[i][j]<min)
			min=dp[i][j];
		}
return min;
}

int main()
{
    int arr[]={40,20,30,10,30};
    memset(dp,0,sizeof(dp));
    cout<<MCMmemo(arr,1,4);
    return 0;
}
