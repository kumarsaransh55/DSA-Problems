#include <bits/stdc++.h>
using namespace std;

int merge1(int arr[],int low,int mid,int high){
		int inv=0;
	int n1= mid-low+1;
	int n2= high-mid;
	int a[n1];
	int b[n2];
	for(int i=0;i<n1;i++){
	a[i]= arr[low+i];
	}
	for(int i=0;i<n2;i++){
		b[i]= arr[mid+1+i];
	}
		int i=0;
		int j=0;
		int k =low;
		while(i<n1&&j<n2){
		if(a[i]<b[j]){
			arr[k]= a[i];
			k++;i++;
		}
		else{
			arr[k]= b[j];
			inv+= n1-i;
			k++;j++;
		}}
		while(i<n1){
			arr[k]= a[i];
			k++;i++;
		}
		while(j<n2){
			arr[k]= b[j];
			k++;j++;
		}
return inv;
}

int mergesort(int arr[], int low, int high){
	int inv=0;
	if(low<high){
		int mid= (low+high)/2;
		inv += mergesort(arr,low,mid);
		inv +=mergesort(arr,mid+1,high);
		inv +=merge1(arr,low,mid,high);
	}
	return inv;
}

int main()
{
	int arr[]= {8, 2, 4, 1, 3, 5};
    int n= sizeof(arr)/sizeof(arr[0]);
    cout<<mergesort(arr,0,n-1);
    for(int i=0;i<n;i++){
		cout<<arr[i]<<" ";
    }
    return 0;
}
