#include <bits/stdc++.h>
using namespace std;

struct job{
	int index;
	int dead;
	int profit;
};

bool desc(job a, job b){
	return a.profit>b.profit;
}

void maxprofit(job arr[], int n){
		sort(arr,arr+n, desc);
	int totalprofit=0;
	int noofjobs=0;
	int arr1[n+1];
	memset(arr1, -1 , sizeof(arr1));
	for(int i=0;i<n;i++){
		for(int j=arr[i].dead;j>0;j--){
			if(arr1[j]== -1){
				arr1[j] = arr[i].dead;
				noofjobs++;	totalprofit += arr[i].profit;
				break;
			}
		}
	}
		cout<< noofjobs<<" "<< totalprofit;
}

int main()
{
	int n = 4;
	job arr[n] = {{1,4,20},{2,1,10},{3,2,40},{4,2,30}};
	maxprofit(arr,n);
    return 0;
}
