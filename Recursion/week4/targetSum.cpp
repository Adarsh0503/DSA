#include<iostream>
#include<vector>
#include<limits>
using namespace std;

int targetSum(vector<int>&arr, int target){
    if(target==0){
        return 0;
    }if(target<0){
        return INT16_MAX;
    }



int mini=INT16_MAX;
    for(int i=0;i<arr.size();i++){
        

        int ans= targetSum(arr,target-arr[i]);
        mini=min(mini,ans+1);

    }
    return mini;
}

int main(){

    vector<int>arr={1,2,7};
    int target=7;

    int answer= targetSum(arr,target);
    cout<<answer;

}