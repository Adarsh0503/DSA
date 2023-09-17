#include<iostream>
using namespace std;

int maximum(int arr[][3], int rows, int cols){
    int max=INT16_MIN;
    for(int i=0;i<rows;i++){
        for(int j=0;j<cols;j++){
            if(arr[i][j]>max){
                max=arr[i][j];
            }
        }
    }
    return max;
}
int main(){
    int rows=3;
    int cols=3;
    int arr[3][3];

    for(int i=0;i<rows;i++){
        for(int j=0;j<cols;j++){
            cin>>arr[i][j];
        }
    }
    int max=maximum(arr,rows,cols);
    cout<<"The maximum element in 2D array is "<<max<<endl;



}