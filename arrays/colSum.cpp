#include<iostream>
using namespace std;
int main(){
    int rows,cols;
    cin>>rows;
    cin>>cols;
    int arr[rows][cols];

    for(int i=0;i<rows;i++){
        for(int j=0;j<cols;j++){
            cin>>arr[i][j];
        }
    }


    
    for(int i=0;i<cols;i++){
        int colSum=0;
        for(int j=0;j<rows;j++){
            colSum+=arr[j][i];
        }
        cout<<"The sum of "<<i<<"row is "<<colSum<<endl;
    }
}