#include <bits/stdc++.h>
using namespace std;

int compareVersions(string s1,string s2){
	int n=s1.size();
	int m= s2.size();
	int i=0;int j=0;
	int num1=0,num2=0;
	while(i<n||j<m){
		while(i<n&&s1[i]!='.'){
			num1= num1*10+ (s1[i]-'0');
			i++;
		}
		while(j<m&&s2[j]!='.'){
			num2= num2*10+ (s2[j]-'0');
			j++;
		}
		if(num1<num2){
			return -1;
		}
		else if(num1>num2){
			return 1;
		}
		else {
			num1=0; num2=0;
			i++;	j++;
		}
	}
		return 0;
}

int main()
{
    string s1="1.21.03.4";
    string s2="1.21.3.4";
    cout<<compareVersions(s1,s2);
    return 0;
}
