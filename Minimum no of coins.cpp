#include <bits/stdc++.h>
using namespace std;

void noofcoins(int n,int m){
	int ans=0;
	int arr[]= {1,2,5,10,20,50,100,200,2000};
	int i=n-1;
	while(i>0){
		while(arr[i]<=m){
		m=m-arr[i];
		ans++;
	}
	 i--;
	}
		cout<<ans;
}

int main()
{
    int n,m;
    cin>>n>>m;
    noofcoins(n,m);
    return 0;
}
