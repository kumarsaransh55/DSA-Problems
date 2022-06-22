#include <bits/stdc++.h>
using namespace std;

int noofpairs(int arr[], int n){
		int i=0;int j=n-1;
		int k=6;
		int ans=0;
		sort(arr,arr+n);
		while(i!=j){
		if(arr[i]+arr[j]==k){
				ans++;
				i++;
		}
		else if(arr[i]+arr[j]>k){
				j--;
		}
		else{
			i++;
			}
		}
		return ans;
}

int main()
{
	int arr[]= { 1, 5, 7, 1, 5};
    int n = sizeof(arr)/ sizeof(arr[0]);
    cout<<noofpairs(arr,n);
    return 0;
}
