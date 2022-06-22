#include <bits/stdc++.h>
using namespace std;

int Rabinkarp(string s, string target){
	int n= s.length();
	int m= target.length();
	int base= 10000007;
	int power=1;
	for(int i=0;i<m;i++){
		power= (power*31)%base;
	}
	int targethash= 0;
	for(int i=0;i<m;i++){
		targethash =(targethash*31+target[i])%base;
	}
	int hashcode=0;
	for(int i=0;i<n;i++){
			hashcode=(hashcode*31+ s[i])%base;
		if(i<m-1) continue;
		if(i>=m){
			hashcode= (hashcode- s[i-m]*power)%base;
		}
		if(hashcode<0){
			hashcode+= base;
		}
		if(hashcode==targethash){
			if(s.substr(i-m+1,m)==target){
				return i-m+1;
			}
		}}
return -1;
}
int repeatedstring(string a , string b){
	if(a==b)
		return 1;
		int count=1;
		string source= a;
	while(source.size()<b.size()){
		count++;
		source+=a;
	}
	if(source==b) return count;
	if(Rabinkarp(source,b)!= -1) return count;
	if(Rabinkarp(source+a,b)!= -1) return count+1;
		return -1;
}

int main()
{
	string s= "abcd";
	string target= "cdabcdab";
	cout<<repeatedstring(s,target)<<endl;
    return 0;
}
