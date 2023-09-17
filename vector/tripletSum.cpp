#include<iostream>
#include<vector>
using namespace std;

void tripletSum(vector<int>&arr, int target){
    vector<int>ans;
    for(int i=0;i<arr.size();i++)
    for(int j=i+1;j<arr.size();j++){
        for(int k=j+1;k<arr.size();k++){
            if((arr[i]+arr[j]+arr[k])==target){
                cout<<arr[i]<<", "<<arr[j]<<", "<<arr[k];
            }
        }
    }
    for(int i=0;i<ans.size();i++){
        cout<<ans[i]<<" ";
    }
    // cout<<endl<<ans.size();
}

int main(){
    int n;
    cin>>n;
    vector<int>arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];

    }
    int target;
    cin>>target;

    
    tripletSum(arr,target);

    return 0;
}