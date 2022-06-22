#include<bits/stdc++.h>
using namespace std;

void reversed(string s){
	string temp="";
	int n= s.length();
	string ans="";
	int i=0;
	while(i<n){
		if(s[i]!=' '){
			temp +=s[i];
		}
		else if(s[i]==' '){
			if(ans!="" ){
				ans= temp+" "+ ans;
			}
			else{
				ans= temp;
			}
			temp= "";
		}i++;
	}
if(temp!=""){
	if(ans!="") ans =temp+" "+ans;
	else ans=temp;

}
	cout<<ans;
}

int main() {
	string s="TUF is great for interview preparation";
	reversed(s);
}
