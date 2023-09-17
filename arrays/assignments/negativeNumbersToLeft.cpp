#include<iostream>
#include<vector>
using namespace std;

void negativeToLeft(vector<int>&nums){
    int low=0;
    int high=nums.size()-1;
    int i=0;
    while(i<=high){
        if(nums[i]>=0){
            i++;
        } else{
            swap(nums[i],nums[low]);
            i++;
            low++;
        }
    }

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
   negativeToLeft(nums);
    for(int i=0;i<nums.size();i++){
        cout<<nums[i]<<" ";
    }

}