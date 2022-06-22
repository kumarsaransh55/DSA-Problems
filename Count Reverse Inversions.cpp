#include <bits/stdc++.h>
using namespace std;

int counting(int arr[], int n){
int cc=0;
for(int i=0;i<n-1;i++){
for(int j=i+1;j<n;j++){
if((arr[i]<arr[j])&&i<j){
	cc++;
}
}
}
return cc;
}

int merge1(int arr[],  int low,int mid,int high){
		int inversion=0;
		int n1= mid-low+1;
		int n2= high-mid;
		int a[n1],b[n2];
		for(int i=0;i<n1;i++){
			a[i]=arr[low+i];
		}
		for(int i=0;i<n2;i++){
			b[i]=arr[mid+i+1];
		}
		int i=0,j=0,k=low;
		while(i<n1 && j<n2){
			if(a[i]<=b[j]){
				arr[k]= a[i];
				i++;k++;
			}
			else
				arr[k]= b[j]; k++;j++;
				inversion += n1-i;
		}
			while(i<n1){
				arr[k]= a[i];
				k++;i++;
			}
			while(j<n2){
				arr[k]= b[j];
				k++;j++;
			}
			return inversion;
}

int mergesort1(int arr[],int low ,int high){
		int inversion= 0;
		if(low<high){
			int mid= (low+high)/2;
			inversion += mergesort1(arr,low,mid);
			inversion += mergesort1(arr,mid+1,high);
			inversion += merge1(arr,low,mid,high);
		}
				return inversion;
}

int pairmethod(int arr[]){
		vector<pair<int,int>>= p1;


}

int main()
{
	int arr[]= {5,3,2,1,4};
	int n= (sizeof(arr) / sizeof(arr[0]));
    cout << mergesort1(arr,0,n-1) << endl;
    return 0;
}
