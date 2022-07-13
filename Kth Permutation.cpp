#include <bits/stdc++.h>
using namespace std;

vector<int> getPermutation(int n, int k){
    int fact=1;
    vector<int> arr;
    for(int i=1;i<n;i++){
        fact= fact*i;
        arr.push_back(i);
    }
    arr.push_back(n);
    k=k-1;
    vector<int> ans;
    while(true){
        ans.push_back(arr[k/fact]);
        arr.erase(arr.begin()+k/fact);
        if(arr.size()==0){
            break;
        }
        k=k%fact;
        fact=fact/arr.size();
    }
    return ans;
}

int main(){
   int n = 3, k = 3;
   vector<int> ans = getPermutation(n, k);
   cout << "The Kth permutation sequence is " << ans[0] <<ans[1]<<ans[2]<< endl;
return 0;
}
