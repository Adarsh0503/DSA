#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

// elements from 1 to n
// so we can treat elements as index

//visiting method

void missing(vector<int>&arr){
    for(int i=0;i<arr.size();i++){
        int index=abs(arr[i]);
        if(arr[index-1]>0)
        arr[index-1] *=-1;
    }

    for(int i=0;i<arr.size();i++){
        cout<<arr[i]<<" ";
    }
}


// another method
// // sorting+swapping method
void missingElement(vector<int>arr){
    sort(arr.begin(),arr.end());
    for(int i=0;i<arr.size();i++){
        if(arr[i]!=i+1){
            cout<<i+1<<" ";
        }
    }
}



int main(){
    int n;
    cin>>n;
    vector<int>arr(n);
     for(int i=0;i<arr.size();i++){
        cin>>arr[i];

    }

missingElement(arr);

}