#include <bits/stdc++.h>
using namespace std;

struct item{
	int val;
	int wt;
};

bool desc(item a, item b){
	double r1= (double) a.val/(double) a.wt;
	double r2= (double) b.val/(double) b.wt;
	return r1>r2;
}

maxprofit(item arr[], int n, int w){
	sort(arr,arr+n, desc);
	double totalval=0;
	for(int i=0;i<n;i++){
		if(arr[i].wt<=w){
			w -=arr[i].wt;
			totalval += arr[i].val;
		}else{
			totalval+= (double)((double)arr[i].val/(double)arr[i].wt)*w;
			w=0;
			break;
		}
	}
			cout<< totalval;
}

int main()
{
	int n = 3, weight = 50;
	item arr[n] = { {100,20},{60,10},{110,30} };
    maxprofit(arr,n,weight);
    return 0;
}
