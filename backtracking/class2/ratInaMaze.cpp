#include<iostream>
#include<vector>
using namespace std;
bool visited(vector<vector<int>>maze,int i, int j,int rows, int cols, vector<vector<int>>&isVisited){
    if(i>=0&& i<rows && j>=0 && j<cols&& maze[i][j]==1 && isVisited[i][j]==0){
        return true;
    }else{
        return false;
    }

}
void solveMaze(vector<vector<int>>maze, int i, int j,int rows,int cols,vector<vector<int>>&isVisited, vector<string>&output, string path){
// base case
if((i == rows-1) && (j==cols-1)){
    output.push_back(path);
    return;
}
//down
if(visited(maze,i+1,j,rows,cols,isVisited)){
     isVisited[i+1][j]=1;
    solveMaze(maze,i+1,j,rows,cols,isVisited,output,path+'D');

    // backtrack
    isVisited[i+1][j]=0;
   

}
// top
if(visited(maze,i-1,j,rows,cols,isVisited)){
     isVisited[i-1][j]=1;
    solveMaze(maze,i-1,j,rows,cols,isVisited,output,path+'U');

    // backtrack
    isVisited[i-1][j]=0;
   

}


// left
if(visited(maze,i,j+1,rows,cols,isVisited)){
     isVisited[i][j+1]=1;
    solveMaze(maze,i,j+1,rows,cols,isVisited,output,path+'R');

    // backtrack
    isVisited[i][j+1]=0;
   

}

// left
if(visited(maze,i,j-1,rows,cols,isVisited)){
     isVisited[i][j-1]=1;
    solveMaze(maze,i,j-1,rows,cols,isVisited,output,path+'L');

    // backtrack
    isVisited[i][j-1]=0;
   

}
}
int main() {
    vector<vector<int>> maze = {{1, 0, 0, 0}, {1, 1, 1, 0}, {1, 0, 1, 0}, {1, 1, 1, 1}};
    int cols = 4;
    int rows = 4;

    vector<string> output;
    string path = "";
    vector<vector<int>> isVisited(rows, vector<int>(cols, 0));

    // Do not mark the starting point as visited before calling solveMaze
    // isVisited[0][0] = 1;

    solveMaze(maze, 0, 0, rows, cols, isVisited, output, path);

    cout << "Number of paths: " << output.size() << endl;
    cout << "Paths:\n";
    for (int i = 0; i < output.size(); i++) {
        cout << output[i] << " ";
    }

    return 0;
}


// int main(){
// vector<vector<int>>maze={{1,0,0,0},{1,1,1,0},{1,0,1,0},{1,1,1,0}};
// vector<vector<int>> isVisited={{0,0,0,0},{0,0,0,0},{0,0,0,0},{0,0,0,0}};
// isVisited[0][0]=1;
// int cols=4;
// int rows=4;

// vector<string>output;
// string path="";
// solveMaze(maze,0,0,rows,cols,isVisited,output,path);
// cout<<output.size();
// cout << "Number of paths: " << output.size() << endl;
// cout << "Paths:\n";
// for (int i = 0; i < output.size(); i++) {
//     cout << output[i] << " ";
// }


    
// }