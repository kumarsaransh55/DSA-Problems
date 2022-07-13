#include <bits/stdc++.h>
using namespace std;

bool issafe(int row,int col,vector<string> &ds){
    int temprow=row;
    int tempcol=col;
    while(col>=0){
    if(ds[row][col] == 'Q'){
    return false;
    }
    col--;
}
    row=temprow;
    col=tempcol;
    while(row<4&&col>=0){
        if(ds[row][col] == 'Q'){
        return false;
        }
        row++;col--;
    }
    row=temprow;
    col=tempcol;
    while(row>=0&&col>=0){
       if(ds[row][col]=='Q'){
      return false;
      }
    row--;col--;
    }
    return true;
}

void nqueen(int col,vector<vector<string>> &ans,vector<string>& ds,int n){
    if(col==n){
        ans.push_back(ds);
        return;
    }
    for(int row=0;row<n;row++){
        if(issafe(row,col,ds)){
            ds[row][col]='Q';
            nqueen(col+1,ans,ds,n);
            ds[row][col]= '.';
        }
    }
}

void newnqueen(int col,vector<vector<string>> &ans,vector<string>& ds,int n,vector<int> leftrow,vector<int> upperdiag,vector<int> lowerdiag){
    if(col==n){
        ans.push_back(ds);
        return;
    }
    for(int row=0;row<n;row++){
        if(leftrow[row]==0 && lowerdiag[row+col]==0&&upperdiag[n-1+col-row]==0){
            ds[row][col]='Q';
            leftrow[row]=1;
            lowerdiag[row+col]=1;
            upperdiag[n-1+col-row]=1;
            nqueen(col+1,ans,ds,n);
            leftrow[row]=0;
            lowerdiag[row+col]=0;
            upperdiag[n-1+col-row]=0;
            ds[row][col]= '.';
        }
    }
}

int main(){
    int n;
    cin>>n;
    vector<vector<string>> ans;
    vector<string> ds(n);
    string s(n,'.');
    for(int i=0;i<n;i++){
        ds[i]= s;
    }
    //nqueen(0,ans,ds,n);
    vector<int> leftrow(n,0);
    vector<int> upperdiag(2*n-1,0);
    vector<int> lowerdiag(2*n-1, 0);
    newnqueen(0,ans,ds,n,leftrow,upperdiag,lowerdiag);
    for (int i = 0; i < ans.size(); i++) {
    cout << "Arrangement " << i + 1 << "\n";
    for (int j = 0; j < ans[0].size(); j++) {
      cout << ans[i][j]<<" ";
      cout << endl;
    }
    cout << endl;
  }
return 0;
}
