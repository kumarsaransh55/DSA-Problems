#include <bits/stdc++.h>
using namespace std;

void sortedarray(int arr1[],int arr2[],int n,int m){
		int i=0;
		int j=0;
		while(i<n&&j<m){
		if(arr1[i]<=arr2[j]){
				i++;
}
		else{
		swap(arr1[i],arr2[j]);
		}
		sort(arr2,arr2+m);
		}
}

int newgap(int gap){
	if(gap==1) return 0;
	gap= gap/2+gap%2;
	return gap;
}

void gapmethd(int arr1[],int arr2[],int n,int m){
	int gap= newgap(n+m);
	while(gap>=1){
	for(int i=0;i<n+m;i++){
		if(i<n && i+gap<n){
				if(arr1[i]>arr1[i+gap])
			swap(arr1[i],arr1[i+gap]);
		}
		else if(i<n && i+gap<n+m){
			if(arr1[i]>arr2[i+gap-n])
			swap(arr1[i],arr2[i+gap-n]);
		}
		else if(i>n && i+gap<n+m){
			if(arr2[i-n]>arr2[i+gap-n])
			swap(arr2[i-n],arr2[i+gap-n]);
		}
		else if(i+gap>=n+m)
		break;
	}
	gap=newgap(gap);
	}
}
void merging(int arr1[], int arr2[], int n,int m){
			int i=0;
            int gap= (n+m)/2+(n+m)%2;
            while(gap>=1){
            for(int i=0;i<n+m;i++){
                if(i<n && i+gap<n){
                    if(arr1[i]>arr1[i+gap]){
                        swap(arr1[i],arr1[i+gap]);
                    }
                }
                else if(i<n && i+gap<n+m){
                    if(arr1[i]>arr2[i+gap-n]){
                        swap(arr1[i],arr2[i+gap-n]);
                    }
                }
                else if(i>n && i+gap<m+n){
                    if(arr2[i-n]>arr2[i+gap-n]){
                        swap(arr2[i-n],arr2[i+gap-n]);
                    }
                }
                else if(i+gap>=m+n){
                    break;
                }}
			gap=newgap(gap);
            }}

int main()
{
	int arr1[]={1,4,7,8,10};
	int arr2[]={2,3,9};
    int n=sizeof(arr1)/sizeof(arr1[0]);
    int m=sizeof(arr2)/sizeof(arr2[0]);
	merging(arr1,arr2,n,m);
	for(int i=0;i<n;i++){
		cout<<arr1[i]<<" ";
	}
	cout<< endl;
	for(int i=0;i<m;i++){
			cout<<arr2[i]<<" ";
	}
    return 0;
}
