#include<iostream>
#include<vector>
using namespace std;



void insertionSort(vector<int>&arr){
    int n=arr.size();
 int temp;
     for(int i=0;i<n;i++){
       
        int currentElemnt=arr[i+1];
        if(currentElemnt<arr[i])
        temp=arr[i+1];
        arr[i+1]=arr[i];
        arr[i]=temp;

     }

    for(int i=0;i<arr.size();i++){
        cout<<arr[i]<<" ";
    }
}

int main(){

    int n;
    cin>>n;

    vector<int>arr(n);

    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    insertionSort(arr);
}

