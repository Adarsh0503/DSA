#include<iostream>
using namespace std;
//input=arr[]={1,2,3,4,5,6,7,8}
//output= 1,8,2,7,3,6,4,5

void printExtreme(int arr[], int size){
    int start=0;
    int last=size-1;
    while(start<=last){
        if(start==last){
            cout<<arr[start]<<" ";
        }else{
        cout<<arr[start]<<" ";
        cout<<arr[last]<<" ";
        }
        start++;
        last--;

    }

}


int main(){
    int arr[9]={1,2,3,4,5,6,7,8,54};
    int size=9;
    printExtreme(arr,size);
}