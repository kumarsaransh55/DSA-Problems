#include <bits/stdc++.h>
using namespace std;

void searchit(vector<vector<int>> mat,int num){
		 int rows =mat.size();
		 int cols = mat[0].size();
		int i= 0;
		int j=cols-1;
		while(j>=0 && i<rows){
			if(mat[i][j]==num){
				cout<<"Element Found"<<endl;
				return;
			}
			else if(mat[i][j]>num){
				j--;
			}
			else
				i++;
		}
		cout<<"No Element Found";
}

void binsearch(vector<vector<int>> mat,int num){
		 int rows =mat.size();
		 int cols = mat[0].size();
		 int low= 0;
		 int high= rows*cols-1;
		 while(low<=high){
		 int mid= (low+high)/2;
		 if(mat[mid/cols][mid%cols]==num){
			cout<<"Element found";
			return;
		 }
		 else if(mat[mid/cols][mid%cols]>num){
			high= mid;
		 }
		 else
			low =mid+1;
		 }
			cout<<"No Element Found";
}

int main()
{
	int num= 16;
	vector<vector<int>> m1 =  {{1,3,5,7},
												{10,11,16,20},
												{23,30,34,60}};
    binsearch(m1,num);
    return 0;
}
