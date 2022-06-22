#include <bits/stdc++.h>
using namespace std;

void maxxmin(int arr[],int n){
		int minno=INT_MAX;
		int maxno= INT_MIN;
		for(int i=0;i<n;i++){
			if(minno>arr[i]){
				minno= arr[i];
			}
			if(maxno<arr[i]){
				maxno= arr[i];
			}
		}
		cout<<minno<<" "<<maxno<<endl;
}

pair<int,int> pairno(int arr[],int n){
	pair<int , int> p;
	 p.first=INT_MAX;
	p.second= INT_MIN;
		for(int i=0;i<n;i++){
			if(p.first>arr[i]){
				p.first= arr[i];
			}
			if(p.second<arr[i]){
				p.second= arr[i];
			}
		}
		return p;
}

int main()
{
	int n;
	cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
    cin>>arr[i];
    }
    //maxxmin(arr,n);
    cout<<pairno(arr,n).first<<pairno(arr,n).second<<" "<<endl;
    return 0;
}
