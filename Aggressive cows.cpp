#include <bits/stdc++.h>
using namespace std;

bool ispossible(vector<int> v, int currdis,int cows){
    int n=v.size();
    int k=v[0];
    cows--;
    for(int i=1;i<n;i++){
        if(v[i]-k>=currdis){
            cows--;
            if(cows==0){
                return true;
            }
            k=v[i];
        }
    }
    return false;
}

int main(){
  int n = 5, m = 3;
  vector<int> inp {1,2,8,4,9};
  sort(inp.begin(),inp.end());
  int low= 1;
  int high= inp[n-1]-inp[0];
  int ans;
    for(int i=1;i<=high;i++){
        if(ispossible(inp,i,m)){
            ans=max(ans,i);
        }
    }
    int res;
    while(low<=high){
        int mid=(low+high)/2;
        if(ispossible(inp,mid,m)){
            low=mid+1;
            res=mid;
        }else
        high=mid-1;
    }
    cout<<res;
return 0;
}
