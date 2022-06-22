#include <bits/stdc++.h>
using namespace std;

int noobapproach(string src, string target){
	int n= src.size();
	int m= target.size();
	for(int i=0;i<n-m;i++){
			int j;
		for(j=0;j<m;j++){
			if(src[i+j] != target[j]){
				break;
			}
		}
		if(j==m) return i;
	}
	return -1;
}

vector<int> lps(string target){
		int n =target.size();
		vector<int> pi(n,0);
		int j=0;
		for(int i=1;i<n;i++){
			j=pi[i-1];
			while(j>0 && target[i]!=target[j])
				j=pi[j-1];

			if(target[i]==target[j])
				j++;
			pi[i]=j;
		}
		return pi;
}

vector<int> Kmpalgorithm(string src, string target){
		vector<int > lpsarr= lps(target);
		int  n= src.size();
		int pos=-1;
		int i=0;
		vector<int> res;
		int j=0;
		while(i<n){
				if(src[i]==target[j]){
					i++;	j++;
				}
				else{
					if(j!=0){
						j= lpsarr[j-1];
					}
					else{
						i++;
					}
				}
		if(j==target.size()){
			res.push_back(i-target.size());
		}
		}
		return res;
}

int main()
{
    string src= "helloll", target = "ll";
    vector<int >ans= Kmpalgorithm(src, target);
    for(int i=0;i<ans.size();i++){
		cout<<ans[i]<<" ";
    }
    return 0;
}
