#include<iostream>
#include<vector>
#include<unordered_map>
using namespace std;


void printSolution(vector<vector<char>> &board, int n){
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout<<board[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<endl<<endl;
}
// bool isSafe(vector<vector<char>> &board, int col, int row,int n){
//     int i=row;
//     int j=col;
//      while(j>=0){
//         if(board[i][j]=='Q'){
//             return false;
//         }
//         j--;

//     }
    

//     i=row;
//      j=col;
    
//     while(i>=0 && j>=0){
//         if(board[i][j]=='Q'){
//             return false;
//         }
//         i--;
//         j--;
//     }
   

//     i=row;
//     j=col;

//     // diagonal downside
//     while(i<n && j>=0){
//         if(board[i][j]=='Q'){
//             return false;
//         }
//         i++;
//         j--;
//     }

//     return true;

    
// }



bool isSafe(vector<vector<char>> &board, int col, int row,int n){
    int i=row;
    int j=col;

     while(j>=0){
        if(board[i][j]=='Q'){
            return false;
        }
        j--;

    }
    

    i=row;
     j=col;
    
    while(i>=0 && j>=0){
        if(board[i][j]=='Q'){
            return false;
        }
        i--;
        j--;
    }
   

    i=row;
    j=col;

    // diagonal downside
    while(i<n && j>=0){
        if(board[i][j]=='Q'){
            return false;
        }
        i++;
        j--;
    }

    return true;

    
}
void solveQueen(vector<vector<char>> &board, int col, int n){
    // base case

    if(col>=n){
        printSolution(board,n);
        return ;
    }
    // 1 case khud se solve kro
    for(int row=0;row<n;row++){
        if(isSafe(board,col,row,n)){
            board[row][col]='Q';

            // recursion
            solveQueen(board,col+1,n);

            // backtrack
            board[row][col]='_';
        }
    }


}

int main(){
    int n=6;
    vector<vector<char>>board(n,vector<char>('_'));

    int col=0;
    

    solveQueen(board,col,n);
    return 0;



}