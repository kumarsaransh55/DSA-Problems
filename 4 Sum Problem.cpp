#include <bits/stdc++.h>
using namespace std;

int binarysearch(vector<int > &arr ,int target2, int low,int high){
		while(low<=high){
				int mid= (low+high)/2;
			if(arr[mid]==target2){
				return mid;
			}
			else if(arr[mid]>target2){
				return binarysearch(arr,target2,low,mid-1);
			}
			else{
				return binarysearch(arr,target2,mid+1,high);
		    }}
		return 0;
}

void bruteforce(vector<int> arr,int target){
		int n= arr.size();
		int i,j,k,l,target2;
		sort(arr.begin(),arr.end());
		set<vector<int>> ans;
		for( i=0;i<n;i++){
		for( j=i+1;j<n;j++){
		for( k=j+1;k<n;k++){
			target2 = target- arr[i]-arr[j]-arr[k];
			l= binarysearch(arr,target2,  k+1, n);
			if(l){
				vector<int> v;
				v.push_back(arr[i]);
				v.push_back(arr[j]);
				v.push_back(arr[k]);
				v.push_back(arr[l]);
				ans.insert(v);
			}
		}
		}
		}
		vector<vector<int>> ans1(ans.begin(),ans.end());
			for(int i=0;i<ans1.size();i++){
			for(int j=0;j<ans1[i].size();j++){
				cout<<ans1[i][j]<<" ";
			}
			cout<<endl;
			}
}

void optimal(vector<int> arr, int target){
		sort(arr.begin(),arr.end());
		vector<vector<int>> res;
		int n= arr.size();
		for(int i=0;i<n;i++){
		int target2= target- arr[i];
		for(int j=i+1;j<n;j++){
			int target3= target2- arr[j];
			int front= j+1;
			int back= n-1;
			while(front<back){

				if((arr[front]+arr[back])<target3){
					front++;
				}
				else if((arr[front]+arr[back])>target3){
					back--;
				}
				else{
					vector<int> v;
			/*	v.push_back(arr[i]);   	*/			v[0]= arr[i];
			/*	v.push_back(arr[j]);		*/			v[1]= arr[j];
			/*	v.push_back(arr[front]);		*/	v[2]= arr[front];
			/*	v.push_back(arr[back]);		*/	v[3]= arr[back];
					res.push_back(v);
				 // Processing the duplicates of number 3
                        while (front < back && arr[front] == v[2]) ++front;
                        // Processing the duplicates of number 4
                        while (front < back && arr[back] == v[3]) --back;

				}}
                // Processing the duplicates of number 2
                while(j + 1 < n && arr[j + 1] == arr[j]) ++j;
            }
            // Processing the duplicates of number 1
            while (i + 1 < n && arr[i + 1] == arr[i]) ++i;
        }
				for(int i=0;i<res.size();i++){
			for(int j=0;j<res[i].size();j++){
				cout<<res[i][j]<<" ";
			}
			cout<<endl;
			}
			}


int main()
{
	vector<int> v={4,3,3,4,4,2,1,2,1,1};
	int num=9;
	optimal(v,num);
    return 0;
}
