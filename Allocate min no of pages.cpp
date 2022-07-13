#include <bits/stdc++.h>
using namespace std;

bool isallocated(int mid,vector<int> arr,int b){
    int n= arr.size();
    int current=0;int newb=0;
    for(int i=0;i<n;i++){
        if(arr[i]>mid){return false;}
        if(current+arr[i]>mid){
            newb++;
            current = arr[i];
        }else{
        current= current+arr[i];
        }
    }
    if(newb<b){
        return true;
    }
    return false;
}

int books(vector<int >arr,int b){
    if(b>arr.size()){
        return -1;
    }
    int n= arr.size();
    int low= arr[0];
    int high=0;
    for(int i=0;i<n;i++){
        high+=arr[i];
        low= min(low,arr[i]);
    }
    int ans;
    while(low<=high){
        int mid= (low+high)/2;
        if(isallocated(mid,arr,b)){
            ans= mid;
            high= mid-1;
        }else{
        low=mid+1;
        }
    }
    return ans;
}

int main(){
  vector<int> A = {5, 17, 100, 11};
  int B = 4;
  cout << "Minimum Possible Number is " << books(A, B);
return 0;
}
