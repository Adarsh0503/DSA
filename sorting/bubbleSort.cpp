#include<iostream>
#include<vector>
using namespace std;

void bubbleSort(vector<int>&arr){

    for(int i=0;i<arr.size()-1;i++){
        for(int j=0;j<arr.size()-i-1;j++){
            if(arr[j]>arr[j+1])
            swap(arr[j],arr[j+1]);
        }
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

    bubbleSort(arr);
}

// TIME COMPLEXITY
// --> O(N^2)
// SPACE COMPLEXITY
// --> O(1)

