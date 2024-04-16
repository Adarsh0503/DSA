#include<iostream>
#include<vector>

using namespace std;

int coinChange(vector<int>&arr, int target){

    if(target==0){
        return 0;
    }if(target<0){
        return INT16_MAX;
    }
    int mini=INT16_MAX;

    for (int i = 0; i < arr.size(); i++)
    {
        int ans=coinChange(arr,target-arr[i]);
        mini=min(ans+1,mini);
    }
    return mini;
    
}

int main(){
    vector<int>arr{1,2,3,5};
    int target=9;

    int answer=coinChange(arr,target);

    cout<<answer<<endl;




}