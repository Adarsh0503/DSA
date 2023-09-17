#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

void sort(vector<int>&arr, int n){
    int i=0;
    int end=n-1;
    int start=0;
    while(start<=end){

     if(arr[i]==0){
        swap(arr[start],arr[i]);
        i++;start++;
     }else{
        swap(arr[i],arr[end])   ;
        
        end--;
     }
    }
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}
int main(){
    //we will use 2 pointer approach

    vector<int>arr{0,0,1,0,1,1,0,1,0,1,0};
    int n=arr.size();

    sort(arr,n);
  
}