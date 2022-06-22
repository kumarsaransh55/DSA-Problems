#include <bits/stdc++.h>
using namespace std;

void reverseit(string &arr, int n){
	char temp;
	for(int i=0;i<n/2;i++){
	temp= arr[i];
	arr[i] = arr[n-1];
	arr[n-1]= temp;
	n--;
	}

}

int main()
{
    string arr="Yoyohonew";
    int n= arr.size();
	reverseit(arr,n);
	for(int i=0;i<10;i++){
	cout<<arr[i]<<" ";
	}
    return 0;
}
