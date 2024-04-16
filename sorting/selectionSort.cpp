#include<iostream>
#include<vector>
using namespace std;

// used when array size is small
//minimum elenment ko select krke shi kgah daal dete ho


void selectionSort(vector<int>&arr){


    int s=0;
    int e=arr.size()-1;
    for(int i=0;i<arr.size()-1;i++){

        int minNumber=i;
        for(int j=i+1;j<arr.size();j++){
            if(arr[j]<arr[minNumber])
            minNumber=j;

        }
        swap(arr[i],arr[minNumber]);
       
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

    selectionSort(arr);
}

// TIME COMPLEXITY
// --> O(N^2)
// SPACE COMPLEXITY
// --> O(1)

