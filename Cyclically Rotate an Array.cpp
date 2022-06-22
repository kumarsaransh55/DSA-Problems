#include <bits/stdc++.h>
using namespace std;

void rotateit(int arr[],int n){
		int i;
		for(int i=n-1;i>0;i--){
		swap(arr[i],arr[i-1]);
		}
		for(int i=0;i<n;i++){
		cout<<arr[i]<<" ";
		}
}

int main()
{
		int arr[]={1,2,3,4,5};
		int n=sizeof(arr)/sizeof(arr[0]);
		rotateit(arr,n);
    return 0;
}
