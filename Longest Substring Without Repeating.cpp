#include <bits/stdc++.h>
using namespace std;

int solvebrute(string s){
		int maxans=0;
		int n= s.size();
		for(int i=0;i<n;i++){
		unordered_set <int> set;
		for(int j=i;j<n;j++){
		if(set.find(s[j])!= set.end()){
			maxans= max(maxans,j-i);
			break;
		}
		else
			set.insert(s[j]);
		}
		}
		return maxans;
}

int o2napproach(string s){
	int maxans=0;
	int n=s.size();
	unordered_set <int> set;
	int l=0,r=0;
	for(int r=0;r<n;r++){
		if(set.find(s[r])!=set.end()){
			while(l<r&&set.find(s[r])!=set.end()){
				set.erase(s[l]);
				l++;
			}
		}
			set.insert(s[r]);
			maxans=max(maxans,r-l+1);
	}
return maxans;
}

int onapproach(string s){
	int maxlen=0;
	int n=s.size();
	vector <int> mp(256,-1);
	int l=0,r=0;
	while(r<n){
		if(mp[s[r]]!=-1){
			l=max(mp[s[r]]+1,l);
		}
		mp[s[r]]=r;
		maxlen=max(maxlen,r-l+1);
		r++;
	}
	return maxlen;
}

int main()
{
	string s= "abcabcbb";
	cout<<onapproach(s)<<endl;
    return 0;
}
