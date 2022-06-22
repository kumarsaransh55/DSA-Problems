#include <bits/stdc++.h>
using namespace std;

int main()
{
    int N;
    cin>>N;
    int arr[N];
    for(int i=0;i<N;i++){
    cin>>arr[i];
    }
    int x;
    cin>>x;
	//Starting of solution
	int probsum=0;
	for(int i=0;i<N;i++){
	if(arr[i]>x){
		probsum++;
	}
	}
	double ans= (double)probsum/N;
	cout << setprecision (2) << ans;
    return 0;
}
