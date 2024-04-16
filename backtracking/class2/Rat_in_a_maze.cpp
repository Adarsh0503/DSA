#include<iostream>
#include<vector>
using namespace std;

bool isSafe(int i, int j, int rows, int cols,vector<vector<int>>maze, vector<vector<bool> > &isVisited){
    if(i>=0 && i<rows && j>=0 && j<cols && maze[i][j]==1 &&  isVisited[i][j]==false){
        return true;
    }else{
        return false;
    }
}
void solvemaze(vector<vector<int>>maze, int rows, int cols, int i, int j, vector<vector<bool>>&isVisited, vector<string>&path, string output){
    // base case
    if(i==rows-1 && j==cols-1){
        path.push_back(output);
        return;
    }
    // down
    if(isSafe(i+1,j,rows,cols,maze,isVisited)){
        isVisited[i+1][j]=true;
        solvemaze(maze,rows,cols,i+1,j,isVisited,path,output+'D');

        //backtrack
        isVisited[i+1][j]=false;
    }
    //left
     if(isSafe(i,j-1,rows,cols,maze,isVisited)){
        isVisited[i][j-1]=true;
        solvemaze(maze,rows,cols,i,j-1,isVisited,path,output+'L');

        //backtrack
        isVisited[i][j-1]=false;
    }
    //right
     if(isSafe(i,j+1,rows,cols,maze,isVisited)){
        isVisited[i][j+1]=true;
        solvemaze(maze,rows,cols,i,j+1,isVisited,path,output+'R');

        //backtrack
        isVisited[i][j+1]=false;
    }
    //up
     if(isSafe(i-1,j,rows,cols,maze,isVisited)){
        isVisited[i-1][j]=true;
        solvemaze(maze,rows,cols,i-1,j,isVisited,path,output+'U');

        //backtrack
        isVisited[i-1][j]=false;
    }
}

int main(){
    int rows=4;
    int cols=4;
    vector<vector<int>>maze={{1,0,0,0},{1,1,0,0},{1,1,0,0},{0,1,1,1}};

    // vector<vector<bool>>isVisited{rows,vector<bool>(cols,0)};
    vector<vector<bool> > isVisited(rows, vector<bool>(cols,false));
    isVisited[0][0]=true;
    vector<string>path;
    string output="";

     solvemaze(maze,rows,cols, 0,0, isVisited, path, output);

     cout << "printing the results " << endl;
  for(auto i: path) {
    cout << i << " ";
  }
  cout << endl;
  if(path.size() == 0 ){
    cout << "No Path Exists " << endl;
  }
     return 0;
}