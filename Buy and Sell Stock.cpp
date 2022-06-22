#include <bits/stdc++.h>
using namespace std;

int  profit(int prices[], int n){
	int maxprice= INT_MIN;
		for(int i=0;i<n;i++){
		for(int j=i+1;j<n;j++){
			if(prices[j]>prices[i]){
				maxprice= max(maxprice, prices[j]-prices[i]);
			}
		}
		}
		return maxprice;
}

int paisa(int arr[], int n){
		int prof= 0;
		int minprice=INT_MAX;
		for(int i=0;i<n;i++){
				if(arr[i]<minprice){
					minprice = arr[i];
				}
				else if(prof< arr[i]- minprice){
					prof= arr[i]- minprice;
				}
		}
return prof;
}

int main()
{
	int arr[]= {7,1,5,3,6,4};
	int n= sizeof(arr)/sizeof(arr[0]);
	cout<<paisa(arr,n);
    return 0;
}
