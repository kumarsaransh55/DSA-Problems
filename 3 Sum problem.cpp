#include <bits/stdc++.h>
using namespace std;

void Print_Vector(vector<int> Vec)
{
    for (int i = 0; i < Vec.size(); i++) {
        cout << Vec[i] << " ";
    }
    cout << endl;
    return;
}

void s3um(vector<int> v, int n,int k){
			set<vector<int>>  res;
			vector<int> temp;
			unordered_set<int> s;
			int p=n;
			while(p){
				s.insert(v[p]);
				p--;
			}
			int sum=0;
			for(int i=0;i<n;i++){
			for(int j=i+1;j<n;j++){
				sum= k-(v[i]+v[j]);
				if(s.find(sum)!=s.end()){
						temp.clear();
					temp.push_back(v[i]);
					temp.push_back(v[j]);
					temp.push_back(sum);
					sort(temp.begin(),temp.end());
					if(!temp.empty()){
						res.insert(temp);
					}
				}
			}
			}
		for (auto it = res.begin();
         it != res.end();
         it++) {

        Print_Vector(*it);
    }
}

void optimisedmet(vector<int> &v ,int n,int k){
			vector<vector<int>>  res;
			vector<int> temp;
			int sum=0;
			sort(v.begin(),v.end());
			for(int i=0;i<n-2;i++){
					//if (i == 0 || (i > 0 && v[i] != v[i-1])) {
					sum=k-v[i];
					int low= i+1;
					int high= n-1;
					while(low<high){
						if((v[low]+v[high])==sum){
							temp.clear();
						temp.push_back(v[i]);
						temp.push_back(v[low]);
						temp.push_back(v[high]);
					sort(temp.begin(),temp.end());
					if(!temp.empty()){
						res.push_back(temp);
					}
					while((low<high) && (v[low]==v[low+1])) low++;
					while((low<high) && (v[high]==v[high-1])) high--;
					while((i>0) && (v[i]==v[i+1])) i++;
					low++; high--;
						}
						else if((v[low]+v[high])>sum){
								high--;
						}
						else{
							low++;
					}}//}
			}
			for (auto it = res.begin();it != res.end();it++) {
        Print_Vector(*it);
    }
}

int main()
{
	vector<int> vec= {-1,0,1,2,-1,-4};
	int n= vec.size();
	int k=0;
	optimisedmet(vec,n,k);
    return 0;
}
