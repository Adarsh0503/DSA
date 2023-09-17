#include<iostream>
using namespace std;
bool find(int arr[][3], int rows, int cols, int target){
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            if(arr[i][j]==target)
            return true;
        }
    }
    return false;
}
int main(){
    int rows,cols;
   
    int arr[3][3];
    int target;
    cin>>target;

    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            cin>>arr[i][j];
        }
    }

    bool result=find(arr,3,3,target);
    if(result==1){
        cout<<"Presrent"<<endl;

    }else{
        cout<<"Absent"<<endl;
    }



}