#include <bits/stdc++.h>
using namespace std;

int maxdiff(string s){
		int cursum=0;
		int maxsum=0;
		for(int i=0;i<s.length();i++){
			if(s[i]=='1'){
				s[i]= -1;
			}
			else s[i]=1;
		}
		for(int i=0;i<s.length();i++){
				cursum =cursum+s[i];
				if(cursum>0){														//KADANE ALGORITHM FOR MAX SUM SUBARRAY
				maxsum = max(cursum,maxsum);
				}
				else
				cursum =0;
		}
		return maxsum;
}


int main()
{
		string s= "11000010001";
		cout<<maxdiff(s);
    return 0;
}
