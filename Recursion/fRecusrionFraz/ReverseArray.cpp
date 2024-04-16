#include<iostream>
#include<vector>
using namespace std;

void reverseArray(vector<int>&arr, int start, int end){
    // base conditiion
    if(start>end){
        return;
    }
    

    swap(arr[start],arr[end]);
    start++;
    end--;

    return reverseArray(arr,start,end);


 

}


int main(){

    vector<int>arr={2,3,5,7,8,44,32,1,34,65,24,1,4};
    int start=0;
    int end=arr.size()-1;

    reverseArray(arr,start,end);
    for(int i=0;i<arr.size();i++){
        cout<<arr[i]<<" ";
    }

}