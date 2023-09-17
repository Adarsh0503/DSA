#include<iostream>
#include<vector>
using namespace std;

void pairSum(vector<int>&arr, int target){
    int n=arr.size();
    vector<int>ans;
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(arr[i]+arr[j]==target){
                ans.push_back(arr[i]);
                ans.push_back(arr[j]);
            }
        }
    }
    cout<<"Pair sum are:"<<endl;
    for(int i=0;i<ans.size();i+=2){
        cout<<"("<<ans[i]<<" "<<ans[i+1]<<")";
    }
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

    
    pairSum(arr,target);


}