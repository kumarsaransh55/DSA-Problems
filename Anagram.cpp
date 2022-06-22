#include <bits/stdc++.h>
using namespace std;

bool checkanagram(string s, string t){
sort(s.begin(),s.end());
sort(t.begin(),t.end());
if(s==t){return true;}
return false;
}

bool checkanagram1(string s,string t){
	int n =s.size();
	int m=t.size();
	vector<int> v1(26,0);
	vector<int> v2(26,0);
	for(int i=0;i<n;i++){
		v1[s[i]-'a']++;
	}
	for(int i=0;i<m;i++){
		v2[s[i]-'a']++;
	}
	if(v1==v2){
		return true;
	}
	return false;
}

bool checkanagram2(string s,string t){
	int n =s.size();
	int m=t.size();
	unordered_map <char,int> mp1;
	for(int i=0;i<n;i++){
			mp1[s[i]]++;
			mp1[t[i]]--;
	}
		for(auto it=mp1.begin();it!=mp1.end();it++){
				if((*it).second){
					return false;
				}
		}
		return true;
}

int main()
{
    string s = "aqnagara";
    string t=  "anwaaagr";
    cout<<checkanagram2(s,t);
    return 0;
}
