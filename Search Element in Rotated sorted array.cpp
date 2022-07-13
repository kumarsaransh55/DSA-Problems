#include <bits/stdc++.h>
using namespace std;

int pivot(vector<int> v){
    int n=v.size();
    int low=0;
    int high=n-1;
    int mid;
    while(low<high){
        mid=low+(high-low)/2;
        if(v[mid]<v[high]){
            high=mid;
            }
            else{
            low=mid+1;
            }
    }
    return high;
}

int indexofelement(vector<int> v,int target){
    int n=v.size();
    int low=0;
    int high=n-1;
    int mid;
    while(low<=high){
        mid=low+(high-low)/2;
        if(v[mid]==target){
            return mid;
        }
        else if(v[low]<=v[mid]){
            if(target<=v[mid]&&target>=v[low]){
                high=mid-1;
            }
            else{
            low=mid+1;
            }
        }
        else{
            if(target>=v[mid]&&target<=high){
                low=mid+1;
            }else{
            high=mid-1;
            }
        }
    }
    return -1;
}

int main(){
    vector<int> v={4,5,6,7,0,1,2,3};
    cout<<pivot(v);
return 0;
}
