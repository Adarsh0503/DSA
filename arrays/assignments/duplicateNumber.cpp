#include<iostream>
#include<vector>
using namespace std;

int duplicate(vector<int>&nums){
    while(nums[0]!=nums[nums[0]]){
        swap(nums[0],nums[nums[0]]);
    }
    return nums[0];

}
int main(){
    int n;
    cin>>n;
    vector<int> nums(n);
    for(int i=0;i<nums.size();i++){
        cin>>nums[i];
    }
    // int n=nums.size();
   // sortColors(nums);
    int ans=duplicate(nums);
    cout<<ans;
    

}