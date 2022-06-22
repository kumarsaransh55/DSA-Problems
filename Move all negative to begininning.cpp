#include <bits/stdc++.h>
using namespace std;
void swapy(int &a,int&b){
	int temp;
	temp=a;
	a=b;
	b=temp;
}

void newarray(int arr[], int n){
	int low=0;
	int mid= 0;
	int high=n-1;
	while(mid<=high){
		if(arr[mid]<0){
			swapy(arr[mid],arr[low]);
			low++;mid++;
		}
		else if(arr[mid]>0){
			swapy(arr[mid],arr[high]);
			high--;
		}
		else if(arr[mid]==0){
			mid++;
}}
}

void rearrange(int arr[], int n)
{
    int j = 0;
    for (int i = 0; i < n; i++) {
        if (arr[i] < 0) {
            if (i != j)
                swap(arr[i], arr[j]);
            j++;
        }
    }
}

int main()
{
    int arr[]={-2,-2,-3,12,33,-22,-2,-3,3,-4};
    int n= sizeof(arr)/sizeof(arr[0]);
    rearrange(arr,n);
    for(int i=0;i<n;i++){
    cout<<arr[i]<<" ";
    }
    return 0;
}
