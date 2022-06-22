#include <bits/stdc++.h>
using namespace std;

int binomialcoeff(int n , int r){
			int res=1;
			if(r>n-r){
				r=n-r;
			}
			for(int i=0;i<r;i++){
			res= res*(n-i);
			res= res/(i+1);
			}
	return res;
}

void pascal(int n){
		vector<vector<int >> pass( n , vector<int> (n, 0));
		for(int i=0;i<n;i++){
		for(int j=0;j<=i;j++){
				if(j==0||i==j){
			 pass[i][j]=1;
			}	else{
			pass[i][j]= pass[i-1][j-1]+pass[i-1][j];
		}}
		}
		for(int i=0;i<n;i++){
			for(int j=0;j<=i;j++){
			cout<<pass[i][j]<<" ";
    }
    cout<<endl;
    }
}

int main()
{
    int n;
    cin>>n;
    /*for(int i=0;i<n;i++){
    for(int j=0;j<=i;j++){
    cout<<binomialcoeff(i,j)<<" ";
    }
    cout<<endl;
    }*/
	pascal(n);
    return 0;
}
