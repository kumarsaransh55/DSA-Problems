#include <bits/stdc++.h>
using namespace std;

bool isvalid(int num,vector<vector<char>> board,int row,int col){
    for(int i=0;i<9;i++){
        if(board[i][col]==num){
            return false;
        }
        if(board[row][i]==num){
            return false;
        }
        if(board[3 * (row / 3) + i / 3][3 * (col / 3) + i % 3] == num){
            return false;
        }
    }
    return true;
}

bool solve(vector<vector<char>> &board){
    for(int i=0;i<board.size();i++){
    for(int j=0;j<board[i].size();j++){
            if(board[i][j]=='.'){
                for(char num='1';num <= '9';num++){
                        if(isvalid(num,board,i,j)){
                            board[i][j]=num;
                            if(solve(board)){
                                return true;
                            }else{
                            board[i][j]='.';
                            }
                        }
                }
                return false;
            }
    }
    }
    return true;
}

int main(){
     vector<vector<char>>board={
        {'9', '5', '7', '.', '1', '3', '.', '8', '4'},
        {'4', '8', '3', '.', '5', '7', '1', '.', '6'},
        {'.', '1', '2', '.', '4', '9', '5', '3', '7'},
        {'1', '7', '.', '3', '.', '4', '9', '.', '2'},
        {'5', '.', '4', '9', '7', '.', '3', '6', '.'},
        {'3', '.', '9', '5', '.', '8', '7', '.', '1'},
        {'8', '4', '5', '7', '9', '.', '6', '1', '3'},
        {'.', '9', '1', '.', '3', '6', '.', '7', '5'},
        {'7', '.', '6', '1', '8', '5', '4', '.', '9'}
    };
    solve(board);
    for(int i=0;i<board.size();i++){
    for(int j=0;j<board[i].size();j++){
            cout<<board[i][j]<<" ";
    }cout<<endl;
    }
return 0;
}
