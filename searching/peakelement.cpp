#include<iostream>
#include<vector>
using namespace std;



int peakElement(vector<int>arr){
    int start=0;
    int end=arr.size()-1;
    int mid=start+(end-start)/2;
while(start<end){

    if(arr[mid]<arr[mid+1]){
        start=mid+1;
    }else{
    end=mid;
    }
    mid=start+(end-start)/2;
}
    return start;

    
}
int main(){
    vector<int>arr{0,10,12,14,12,4,2,1};

    int ans=peakElement(arr);
    cout<<ans;
}