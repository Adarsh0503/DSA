#include<iostream>
#include<vector>
using namespace std;

// void sortColors(vector<int>&nums){
//time complexity is o(n+n)->o(n);
//space complexity=o(1);
//     //count method;
//     int zeroes=0;
//     int ones=0;
//     int twos=0;
//     for(int i=0;i<nums.size();i++){
//         if(nums[i]==0){
//             zeroes++;
//         }else if(nums[i]==1){
//             ones++;
//         }else{
//             twos++;
//         }
//     }
//     //spreading
//     int i=0;
//     while(zeroes--){
//         nums[i]=0;
//         i++;
//     }
//     while(ones--){
//         nums[i]=1;
//         i++;
//     }
//     while(twos--){
//         nums[i]=2;
//         i++;
//     }
    
    //its not inplace method


// }




//inplace solution
//3 pointer approach
//low medium high pointers
void inplaceSort(vector<int>&nums){
    int low=0;
    int i=0;
    int high=nums.size()-1;
    while(i<=high){
        if(nums[i]==0){
            swap(nums[i],nums[low]);
                low++;
                i++;
            }
        else if(nums[i]==1){
            i++;
        }else{
            swap(nums[high],nums[i]);
            high--;
            
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
   inplaceSort(nums);
    for(int i=0;i<nums.size();i++){
        cout<<nums[i]<<" ";
    }

}