#include <bits/stdc++.h>
using namespace std;

 void setZeroes(vector < vector < int >> &arr){
	bool isrow = false;
	bool iscol = false;
int n=3;
		for(int i=0;i<arr.size(); i++){
				if(arr[i][0]==0) iscol= true;
		}
		for(int i=0;i<arr[0].size(); i++){
				if(arr[0][i]==0) isrow= true;
		}
		cout<<isrow<<endl;
		cout<<iscol<<endl;
		for (int i = 1; i < arr.size(); i++) {
			for (int j = 1; j < arr[0].size(); j++) {
						if(arr[i][j]==0){
							arr[0][j]=0;
							arr[i][0]=0;
				}}}
				for(int i=1;i<arr.size(); i++){
				if(arr[0][i]==0){
					for(int j=0;j<n;j++){
					arr[j][i]=0;
					}
				}
				if(arr[i][0]==0){
					for(int j=0;j<n;j++){
					arr[i][j]=0;
					}
				}
				}

				if(isrow){
				for(int i=0;i<n;i++){
				arr[0][i]=0;
				}
				}
				if(iscol){
				for(int i=0;i<n;i++){
				arr[i][0]=0;
				}
				}
}

int main()
{
	vector < vector < int >> arr;
		arr = {{ 0, 2, 0}, {4, 5, 2}, {1, 1, 5}};
		setZeroes(arr);
		cout << "The Final Matrix is " << endl;
			for (int i = 0; i < arr.size(); i++) {
			for (int j = 0; j < arr[0].size(); j++) {
				cout << arr[i][j] << " ";
				}
				cout << "\n";
				}
    return 0;
}
