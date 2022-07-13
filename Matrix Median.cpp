#include <bits/stdc++.h>
using namespace std;

int count(vector<vector<int>> &matrix, int mid) {
    int cnt=0;
    int n= matrix.size();
    int m= matrix[0].size();
    for(int i=0; i<n; i++) {
        auto it=upper_bound(matrix[i].begin(),matrix[i].end(),mid);
        cnt=cnt+it-matrix[i].begin();
    }
    return cnt;
}
int getMedian(vector<vector<int>> &matrix) {
    int n= matrix.size();
    int m= matrix[0].size();
    int left =INT_MAX;
    int right= INT_MIN;
    for(int i=0; i<n; i++) {
        left=min(left,matrix[i][0]);
        right=max(right,matrix[i][n-1]);
    }
    while(left<=right) {
        int mid= (left+right)/2;
        int  cnt= count(matrix,mid);
        if(cnt<=(n*m)/2) {
            left=mid+1;
        } else {
            right= mid-1;
        }
    }
    return left;
}

int main() {
    int n=3,m= 3;
    vector<vector<int>> matrix= {{2, 6,9},
                                                      {1,5,11},
                                                      {3, 7, 8}};
    cout<<getMedian(matrix);
    return 0;
}
