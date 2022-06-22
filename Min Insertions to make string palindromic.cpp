#include <bits/stdc++.h>
using namespace std;

int minInsertions1(string str){
	int n = str.length();
	int start=0; int  end=n-1;
	int rec =n-1;
	while(start<end){
		if(str[start]==str[end]){
			start++;end--;
		}
		else{
			start=0;
			rec--;
			end=rec;
		}
	}
	return n-rec-1;
	}

vector<int> getlps(string str){
	int n= str.length();
	vector<int> lps(n,0);
	int j=0;
	for(int i=1;i<n;i++){
		j=lps[i-1];
		while(j>0&&str[i]!=str[j]){
			j=lps[j-1];
		}
		if(str[i]==str[j]){
			j++;
			lps[i]=j;
		}
	}
	return lps;
}

int main()
{
    string str= "abckkk";
    int n= str.length();
	cout<<minInsertions1(str)<<endl;
    string revstr= str;
    reverse(revstr.begin(),revstr.end());
    vector<int> lps= getlps(str+'$'+revstr);
    cout<<n-lps.back();
    return 0;
}
