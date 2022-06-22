#include <bits/stdc++.h>
using namespace std;
void spap(int &a, int &b){
	int temp;
	temp=a;
	a=b;
	b=temp;
}
int sortedarray(int arr[],int n){
	int low=0;
	int mid=0;
	int high=n-1;
	int temp;
	while(mid<=high){
		switch (arr[mid]){
		case 0:
			spap(arr[low],arr[mid]);
			low++;mid++;
			break;
		case 1:
			mid++;
			break;
		case 2:
			spap(arr[mid],arr[high]);
			high--;
			break;
	}}

}

int main()
{
    int arr[]={2,1,0,2,1,0};
    int n=sizeof(arr)/sizeof(arr[0]);
	sortedarray(arr,n);
	for(int i=0;i<n;i++){
	cout<<arr[i];
	}
    return 0;
}
