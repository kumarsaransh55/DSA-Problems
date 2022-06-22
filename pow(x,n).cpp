#include <bits/stdc++.h>
using namespace std;

void brutepower(double x,int n){
		double ans=1;
		bool neg= false;
		if(n<0){
			n=-n;
			neg=true;
		}
		for(int i=0;i<n;i++){
		ans=(double)(ans*x);
		}
		if(neg){
			ans= (double) 1/ans;
		}
		cout<<ans;
}

void optimalpower(double x,int n){
		double ans=1;
		bool neg= false;
		if(n<0){
			n=-n;
			neg=true;
		}
		while(n>=1){
			if(n%2){
				ans= ans*x;
				n=n-1;
			}
			else{
				x= x*x;
				n=n/2;
			}
		}
		if(neg){
			ans= (double) 1/ans;
		}
		cout<<ans;
}

int main()
{
	optimalpower(2,-10);
    return 0;
}
