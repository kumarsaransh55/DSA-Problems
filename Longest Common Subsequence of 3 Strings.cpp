#include <bits/stdc++.h>
using namespace std;

lcsfor3(string s1,string s2,string s3, int i,int j,int k){
	if(i==0||j==0||k==0){
		return 0;
	}
	if(s1[i-1]==s2[j-1]&& s2[j-1]==s3[k-1]){
		return 1+lcsfor3(s1,s2,s3, i-1,j-1,k-1);
	}
	else{
		return max(lcsfor3(s1,s2,s3, i-1,j,k),max(lcsfor3(s1,s2,s3, i,j-1,k),lcsfor3(s1,s2,s3, i,j,k-1)));
	}
}

int main()
{
    string s1="geek";
    string s2 ="geeks";
    string s3 ="geeksforgeeks";
    cout<<lcsfor3(s1,s2,s3,4,5,13)<<endl;
    return 0;
}
