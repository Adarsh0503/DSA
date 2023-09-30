#include<iostream>
#include<vector>
using namespace std;



int missingElemnt(vector<int>&arr){
    int s=0;
    int e=arr.size()-1;
    int mid=s+(e-s)/2;
    int ans=0;
    while(s<=e){
        if(arr[mid]==mid+1){
//rightsearch 
s=mid+1;
        }else if(arr[mid]==mid+2){
            //left search
            ans= arr[mid]-1;
            e=mid-1;
            
        }
        mid=s+(e-s)/2;
    }
    return ans;
}

int main(){
    vector<int>arr{1,2,4};
    // int total=0; 
    // for(int i=0;i<arr.size();i++){
    //     total+=arr[i];
    // }
    // int ans=36-total;

    // // int ans=missingElemnt(arr);
    // cout<<ans;

    int ans=missingElemnt(arr);
    cout<<ans;

}