#include<iostream>
using namespace std;

void transpose(int arr[][3], int rows,int cols){
    cout<<"The transpose of above matrix is :"<<endl;

    for(int i=0;i<rows;i++){
        for(int j=0;j<cols;j++){
            cout<<arr[j][i]<<" ";
        }
        cout<<endl;
    }


}
int main(){
    int rows=3;
    int cols=3;
    int arr[rows][3];

    for(int i=0;i<rows;i++){
        for(int j=0;j<cols;j++){
            cin>>arr[i][j];
        }
    }
    cout<<"The entered matrix is :"<<endl;
    for(int i=0;i<rows;i++){
        for(int j=0;j<cols;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    transpose(arr,3,3);

}