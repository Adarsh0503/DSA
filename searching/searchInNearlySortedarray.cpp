#include<iostream>
using namespace std;

int BinarySearch(int arr[], int n, int target){
    int s=0;
    int e=n-1;
    int mid=s+(e-s)/2;
    while(s<=e){
        if(arr[mid]==target){
            return mid;
        }
        if(mid-1>=0 && arr[mid-1]==target){
            return mid-1;
        }
        if(mid+1<n&&arr[mid+1]==target){
            return mid+1;
        }
        else if(arr[mid]>target){
            e=mid-2;
        }else{
            s=mid+2;
        }
        mid=s+(e-s)/2;
    }
    return -1;
}
int main(){
    int arr[7]={10,3,40,20,50,80,70};
    int n=7;
    int target=70;
    int ans=BinarySearch(arr,n,target);
    cout<<ans<<endl;


}