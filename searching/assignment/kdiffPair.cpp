#include<iostream>
#include<vector>
#include<set>
#include<algorithm>
using namespace std;

//  yeha par unique pair find out krne hai ie 
//  Example 1:

// Input: nums = [3,1,4,1,5], k = 2
// Output: 2
// Explanation: There are two 2-diff pairs in the array, (1, 3) and (3, 5).
// Although we have two 1s in the input, we should only return the number of unique pairs.
// Example 2:

// Input: nums = [1,2,3,4,5], k = 1
// Output: 4
// Explanation: There are four 1-diff pairs in the array, (1, 2), (2, 3), (3, 4) and (4, 5).

int binarySearch(vector<int>&arr, int start, int end, int target){
    start=0;
    end=arr.size()-1;
    int mid=start+(end-start)/2;

    while(start<=end){
        if(arr[mid]==target){
            return mid;
        }else if(arr[mid]<target){
            start=mid+1;
        }else{
            end=mid-1;
        }
        mid=start+(end-start)/2;
    } 

    return -1;

}


int maxDifferentPair(vector<int>&nums,int k){
    // brute force 2 loop se   O(n2).
    // 2 pointer approach ->
    //  sort the array  1 1 3 4 5    // i=0;j=i+1;
    // int diff=a[j]-a[i];    if(diff==k) then answer;
    // i++; and j++;
    // if (diff>k){ then i++  ; }
    // else{j++}
    // binary search approach
    sort(nums.begin(),nums.end());

    int i=0;
    int end= nums.size();
    set<pair<int,int>>ans;

    while(i<end){
        int diff= nums[i]+k;
    int count=binarySearch(nums,i+1,end,diff);
        if(count !=(-1) ){
            ans.insert(nums[i],nums[count]);
            
        }





        i++;
    }




    

    return ans.size();

}

int main(){

vector<int> nums;
for(int i=0;i<nums.size();i++){
    cin>>nums[i];
}
int k;
cin>>k;

int answerCount=maxDifferentPair(nums,k);

cout<<answerCount<<endl;


}