#include <bits/stdc++.h>
using namespace std;

void solve (vector<int> v){
	int n = v.size();
	vector<int> freq(10000,0);
	for(int i=0;i<n;i++){
	freq[v[i]]+=1 ;
	}
	for(int i=0;i<n;i++){
	if(freq[i]>n/2){
			cout<<i<<"  ";
	}
	}
}

void solve2(vector<int> v) {				//Moore's Voting Algorithm
		int n= v.size();
		int count=0;
		int element=0;
		for(int i=0;i<n;i++){
		if(count==0){
			element= v[i];
		}
		if(v[i]== element){
			count++;
		}
		else
			count--;
		}
		cout<<element;
}

//For N/3 Solution Another Moore Voting

vector<int> solve3(vector<int> v){
		int n= v.size();
		int element1=-1,element2=-1;
		int count1=0,count2=0;
		for(int i=0;i<n;i++){
				if(element1==v[i]){
					count1++;
			}
				else if(element2==v[i]){
					count2++;
			}
		    	else if(count1==0){
				element1= v[i];
				count1=1;
			}
    			else if(count2==0){
				element2= v[i];
				count2=1;
			}
	    		else {
					count1--;
					count2--;
			}
		}
			vector<int> ans;
			count1=0; count2 =0;
			for(int i=0;i<n;i++){
			if(v[i]==element1){
				count1++;
			}
			if(v[i]==element2){
				count2++;
			}
			}
			if(count1>n/3){
				ans.push_back(element1);
			}
			if(count2>n/3){
				ans.push_back(element2);
			}
			return ans;
}


int main()
{
		vector<int> v = {3,3,1,1,1,2,3,2};
		vector<int> ans= solve3(v);
		if(ans.size()<1){
			cout<<"No elements found";
		}
		else {
			for(int i=0;i<ans.size();i++){
			cout<<ans[i]<<" ";
			}
		}
    return 0;
}
