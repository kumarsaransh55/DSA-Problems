#include <bits/stdc++.h>
using namespace std;

int solve(vector<int> &vec) {
    int n= vec.size();
    int high=n-1;
    int low=0;
    int mid;
    if(high==0) {
        return -1;
    }
    if(vec[high]!=vec[high-1]) {
        return vec[high];
    }
    if(vec[low]!=vec[low+1]) {
        return vec[low];
    }
    while(low<=high) {
        mid=(low+high)/2;
        if((vec[mid]!=vec[mid-1])&&(vec[mid]!=vec[mid+1])) {
            return vec[mid];
        } else if(((mid%2==0)&&(vec[mid]==vec[mid+1]))||
                  ((mid%2==1)&&(vec[mid]==vec[mid-1]))) {
            low=mid+1;
        } else {
            high=mid-1;
        }
    }
    return -1;
}

int main() {
    vector<int > vec = {1,1,3,3,4,4,6,8,8};
    cout<<solve(vec);
    return 0;
}
