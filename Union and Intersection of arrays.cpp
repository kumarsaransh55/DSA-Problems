#include <bits/stdc++.h>
using namespace std;

void unionfind(int arr1[],int arr2[], int n,int m){
		int i=0,j=0;
		while(i<n&&j<m){
			if(arr1[i]<arr2[j]){
				cout<<arr1[i]<<" ";
				i++;
			}
			else if(arr1[i]==arr2[j]){
				cout<<arr1[i]<<" ";
				i++;j++;
			}
			else{
				cout<<arr2[j]<<" ";
				j++;
			}
		}
		while(i<n){
			cout<<arr1[i]<<" ";
			i++;
		}
		while(j<m){
			cout<<arr2[j]<<" ";
			j++;
		}
}
void interfind(int arr1[],int arr2[],int n,int m){
int i=0,j=0;
		while(i<n&&j<m){
			if(arr1[i]<arr2[j]){
				i++;
			}
			else if(arr1[i]==arr2[j]){
				cout<<arr1[i]<<" ";
				i++;j++;
			}
			else{
				j++;
			}
		}
}

int main()
{
		int arr1[] = {7, 1, 5, 2, 3, 6};
		int arr2[] = {3, 8, 6, 20, 7} ;
		int n= sizeof(arr1)/sizeof(arr1[0]);
		int m=sizeof(arr2)/sizeof(arr2[0]);
		sort(arr1,arr1+n);
		sort(arr2,arr2+m);
		unionfind(arr1,arr2,n,m);
		interfind(arr1,arr2,n,m);
    return 0;
}
