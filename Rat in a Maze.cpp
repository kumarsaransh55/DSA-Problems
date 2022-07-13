#include <bits/stdc++.h>
using namespace std;

void ratinmaze(int row,int col,vector<vector<int>> &maze, int n,vector<vector<int>> &vis,string move,vector<string> &ans){
    if(row==n-1&&col==n-1){
        ans.push_back(move);
        return;
    }
    //Down
    if((row+1<n&&vis[row+1][col]==0)&&maze[row+1][col]==1){
        vis[row][col]=1;
        ratinmaze(row+1,col,maze,n,vis,move+'D',ans);
        vis[row][col]=0;
    }
    //Left
    if((col-1>=0&&vis[row][col-1]==0)&&maze[row][col-1]==1){
        vis[row][col]=1;
        ratinmaze(row,col-1,maze,n,vis,move+'L',ans);
        vis[row][col]=0;
    }
    //Right
    if((col+1<n&&vis[row][col+1]==0)&&maze[row][col+1]==1){
        vis[row][col]=1;
        ratinmaze(row,col+1,maze,n,vis,move+'R',ans);
        vis[row][col]=0;
    }
    //Up
    if((row-1>=0&&vis[row-1][col]==0)&&maze[row-1][col]==1){
        vis[row][col]=1;
        ratinmaze(row-1,col,maze,n,vis,move+'U',ans);
        vis[row][col]=0;
    }
}

vector<string> solve(vector < vector < int >> &maze,int n){
    vector<vector<int>> vis(n,vector<int>(n,0));
    vector<string> ans;
    if(maze[0][0]==1) ratinmaze(0,0,maze,n,vis,"",ans);
    return ans;
}

int main(){
   int n=4;
    vector < vector < int >> m = {{1,0,0,0},{1,1,0,1},{1,1,0,0},{0,1,1,1}};
    vector<string> res=solve(m,n);
    for(int i=0;i<res.size();i++){
      cout<<res[i]<<" ";
    }
      return 0;
}
