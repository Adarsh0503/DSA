#include<iostream>
#include<vector>
using namespace std;

void printArrayUsingRec(vector<int>&arr, int n,int i){
    if(i>=n){
        return ;
    }
    cout<<arr[i]<<" ";
    printArrayUsingRec(arr,n,i+1);
    
}

int main(){

    vector<int> arr={10,20,30,40,50};
    int i=0;
    int n= arr.size();

    printArrayUsingRec(arr,n,i);
}