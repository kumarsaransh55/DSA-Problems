#include <bits/stdc++.h>
using namespace std;

int findlen(vector<int> &vec){
	sort(vec.begin(),vec.end());
	int maxcount=0,counter=1;
	for(int i=0;i<vec.size()-1;i++){
	if(vec[i]==(vec[i+1]-1)){
		counter++;
		maxcount= max(counter,maxcount);
	}
	else{
		counter= 1;
	}}
		return maxcount;
}

int optimised(vector<int> vec){
	int n= vec.size();
	set<int> s1;
	for(int i=0;i<n;i++){
		s1.insert(vec[i]);
	}
	int maxlen=0;
	for(int i=0;i<n;i++){
		if(!s1.count(vec[i]-1)){
			int currentlen=1;
			int currnum= vec[i];
	while(s1.count(currnum+1)){
			currnum++;
			currentlen++;
	}
		maxlen= max(maxlen,currentlen);
		}
}return maxlen;
}

int main()
{
	vector<int> vec={101,102,200,1,2,3,4};
	cout<<optimised(vec);
    return 0;
}
