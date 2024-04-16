#include<iostream>
#include<vector>
using namespace std;

int targetSum(vector<int>&arr, int target){
    if(target==0){
        return 0;
    }
    if(target<0){
        return INT16_MAX;
    }
    int mini=INT16_MAX;
        for(int i=0;i<arr.size();i++){
            int ans=targetSum(arr,target-arr[i]);
if(ans!=INT16_MAX)
            mini=min(ans+1,mini);

        }
        return mini;
}

int main(){

    vector<int>arr{1,1,1,1,1};

    int target=3;
    int ans= targetSum(arr,target);
    cout<<ans;

}