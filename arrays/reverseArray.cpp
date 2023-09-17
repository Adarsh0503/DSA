#include<iostream>
using namespace std;
//input=arr[]={1,2,3,4,5,6,7,8}
//output= 8,7,6,5,4,3,2,1

void printReverse(int arr[], int size){
    //2 pointer approach
    int start=0;
    int last=size-1;
    int temp;
    while(start<=last){
        temp=arr[start];
        arr[start]=arr[last];
        arr[last]=temp;
        start++;
        last--;
        

    }
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
    



    // for(int i=size;i>0;i--){
    //     cout<<arr[i]<<" ";
    // }

}


int main(){
    int arr[8]={1,2,3,4,5,6,7};
    int size=7;
    printReverse(arr,size);
}