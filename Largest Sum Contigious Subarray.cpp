#include <bits/stdc++.h>
using namespace std;

int sumis(int arr[],int n){
		int currsum=0;
		int maxsum=INT_MIN;
		int start=0;
		int end=0;
		for(int i=0;i<n;i++){
			currsum+=arr[i];
			if(currsum>maxsum){
			maxsum=max(maxsum,currsum);
			end=i;
			}
			if(currsum<0){
				currsum=0;

				start=i+1;
			}
		}
		cout<<start<<" "<<end<<endl;
	return maxsum;
}

int main()
{
	int arr[]={-2, -3, 4, -1, -2, 1, 5, -3,1};
	int n=sizeof(arr)/sizeof(arr[0]);
	cout<<sumis(arr,n);
    return 0;
}
