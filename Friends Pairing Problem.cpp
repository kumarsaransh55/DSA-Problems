#include <bits/stdc++.h>
using namespace std;

int frndpairs(int arr[],int n){
		if(n<2){
			return n;
		}
		else if(n==2){
			return n;
		}
		else
			return frndpairs(arr,n-1)+ (n-1)*(frndpairs(arr,n-2));
}

int main()
{
		int n;
		cin>>n;
		int arr[n];
		for(int i=1;i<=n;i++){
		arr[i]=i;
		}
		cout<<frndpairs(arr,n);
    return 0;
}
