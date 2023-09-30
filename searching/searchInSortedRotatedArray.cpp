#include<iostream>
#include<vector>
using namespace std;


int binarySearch(vector<int>&arr,int s, int e, int target){
    // s=0;
    // e=arr.size()-1;
    int mid=s+(e-s)/2;
    while(s<=e){
        if(arr[mid]==target){
            return mid;
        }
        else if(arr[mid]>target){
            e=mid-1;
        }else{
            s=mid+1;
        }
        mid=s+(e-s)/2;
    }
    return mid;

    
}

int pivotElement(vector<int>&arr){
    int s=0;
    int e=arr.size()-1;
    int mid=s+(e-s)/2;

    while(s<e){
        if(arr[mid]>arr[mid+1]){
            return mid;
        } if(arr[mid-1]>arr[mid]){
            return mid-1;
        }

        if(arr[s]>arr[mid]){
            e=mid-1;
        }else{
            s=mid;
        }
        mid=s+(e-s)/2;
    }
    return s;


}

int search(vector<int>&arr, int target){
    int s=0;
    int e=arr.size()-1;
    int mid=s+(e-s)/2;
    int pivotIndex=pivotElement(arr);

    while(s<=e){
        if(target>arr[s] && target<arr[pivotIndex]){
           return  binarySearch(arr,s,pivotIndex,target);
        }else{
           return binarySearch(arr,pivotIndex+1,e,target);
        }
    }
    return -1;
}

int main(){
    vector<int>nums{2};
    int target=2;

    int ans=search(nums, target);
    cout<<pivotElement(nums)<<endl;

    cout<<"The elemnt is present at "<< ans<<" Index"<<endl;

}
