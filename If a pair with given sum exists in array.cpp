#include <bits/stdc++.h>
using namespace std;

void firstapproach(vector<int> arr, int num){
		int n= arr.size();
		int i=0;
		int j=n-1;
		sort(arr.begin(),arr.end());
		while(i<j){
			if(arr[i]+arr[j]== num){
				cout<< i<<" "<< j;
				return;
			}
			else if(arr[i]+arr[j]>num){
			j--;
		}
			else
				i++;
	}
}

void secondapproach(vector<int> v , int num){
		int freq[100]= {0};
		int n=v.size(); int n2;
		for(int i=0;i<n;i++){
			freq[v[i]]++;
		}
		int a,b;
		for(int i=0;i<n;i++){
		int  n2= num-v[i];
		if(freq[n2]){
			a= i;
			b=n2;
			break;
		}
		}
		cout<<a<<" "<<b;
		for(int i=0;i<n;i++){
		if(v[i]==b){
		b=i;
		break;
		}
		}
		cout<<a<<" "<<b<<endl;
}

int main()
{
    vector<int> v={2,7,22,4};
    int num= 9;
    secondapproach(v,num);
    return 0;
}
