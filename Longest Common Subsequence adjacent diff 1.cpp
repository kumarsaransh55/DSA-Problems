#include <bits/stdc++.h>
using namespace std;


int lcs1(int arr[],int n){
		int dp[8];
		for (int i = 0; i < n; i++)
        dp[i] = 1;
		int maxx=1;
		for(int i=1;i<n;i++){
		for(int j=0;j<i;j++){
		if(arr[i]==arr[j]+1||arr[i]==arr[j]-1){
		dp[i]= max(dp[i],dp[j]+1);
		}}}
		for(int i=0;i<n;i++){
				if(maxx<dp[i])
		   maxx= dp[i];
		   }
		return maxx;
}

int longestSubseqWithDiffOne(int arr[], int n)
{
    int dp[n];
    for (int i = 0; i < n; i++)
        dp[i] = 1;

    // Start traversing the given array
    for (int i = 1; i < n; i++) {
        // Compare with all the previous elements
        for (int j = 0; j < i; j++) {
            // If the element is consecutive then
            // consider this subsequence and update
            // dp[i] if required.
            if ((arr[i] == arr[j] + 1) || (arr[i] == arr[j] - 1))

                dp[i] = max(dp[i], dp[j] + 1);
        }
    }

    // Longest length will be the maximum value
    // of dp array.
    int result = 1;
    for (int i = 0; i < n; i++)
        if (result < dp[i])
            result = dp[i];
    return result;
}


int main()
{
		int arr[]= {10, 9, 4, 5, 4, 8, 6};
		cout<<lcs1(arr,7)<<endl;
    return 0;
}
