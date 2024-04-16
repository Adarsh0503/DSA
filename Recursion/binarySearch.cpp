#include<iostream>
#include<vector>
using namespace std;
int binarySearch(vector<int>&v, int s, int e, int key){
     int mid=s+(e-s)/2;
    //  int ans;
    if(s>e){
        return -1;
    }
    if(v[mid]==key){
        return mid;
    }if(v[mid]>key){
        return binarySearch(v,s,mid-1,key);

    }else {
        return  binarySearch(v,mid+1,e,key);
    }
   


}

int main(){
    vector<int>v{1,3,4,6,7,8,13,45,67};
    int size=v.size();
    int key=67;
    int s=0;
    int e= size-1;
    // int mid=s+(e-s)/2;
    int ans= binarySearch(v,s,e,key);
    cout<<ans;



}