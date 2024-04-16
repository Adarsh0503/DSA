#include<iostream>
using namespace std;


void printArray(int arr[], int i){
    if(i==10){
        return ;
    }

    cout<<arr[i]<<" ";
    printArray(arr,i+1);

}

int main(){
    int arr[10]={2,4,6,5,12,43,21,34,65,32};

    int i=0;
    printArray(arr,i);
}