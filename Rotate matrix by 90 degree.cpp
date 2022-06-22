#include <bits/stdc++.h>
using namespace std;

vector<vector<int>>  rotatedmatrix(vector<vector<int>> &v){
			vector<vector<int>> vect= {{1,2,3},
												 {4,5,6},
												 {7,8,9}};;
			int n= v.size();
			for(int i=0;i<n;i++){
			for(int j=0;j<n;j++){
				vect[j][n-i-1]= v[i][j];    // For anticlock wise [n-j-1][i];
			}
			}
			return vect;
}

void optimisedapproach(vector<vector<int>> &v){
			int n= v.size();
			for(int i=0;i<n;i++){
			for(int j=0;j<i;j++){
					swap(v[i][j],v[j][i]);
			}
			}
			/*
			for(int i=0;i<n;i++){
			reverse(v[i].begin(),v[i].end());
			}
			*/
			for(int i=0;i<n;i++){
			for(int j=0;j<=n/2;j++){
				swap(v[i][j], v[i][n-j-1]);
			}
			}
			for(int i=0;i<=n/2;i++){
			for(int j=0;j<n;j++){
					swap(v[i][j],v[n-i-1][j]);
			}
			}
}

int main()
{
		vector<vector<int>> v= {{1,2,3},
												 {4,5,6},
												 {7,8,9}};
			int n= v.size();
		vector<vector<int>> v2= rotatedmatrix(v);
		optimisedapproach(v);
		for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
		cout<<v[i][j]<<" ";
		}
		}
    return 0;
}
