#include <bits/stdc++.h>
using namespace std;


int longsub0sum(vector<int> arr){
	int n= arr.size();
	int maxlen=0;
	for(int i=0;i<n;i++){
	int sum=0;
	for(int j=i;j<n;j++){
		sum=sum+arr[j];
		if(sum==0){
			maxlen=max(maxlen,j-i+1);
		}
	}
	}
	return maxlen;
}

int longestlen(vector<int> arr){
	unordered_map<int,int> mp;
	int n= arr.size();
	int maxlen=0;
	int  sum=0;
	for(int i=0;i<n;i++){
		sum=sum+arr[i];
		if(sum==0){
			maxlen=i+1;
		}
		else{
			if(mp.find(sum)!=mp.end()){
				maxlen=max(maxlen,i-mp[sum]);
			}
			else
				mp[sum]=i;
		}
	}
	return maxlen;
}

int main()
{
		vector <int > arr={9, -3, 3, -1, 6, -5};
		cout<<longestlen(arr)<<endl;
    return 0;
}
